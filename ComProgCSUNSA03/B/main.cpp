#include "bits/stdc++.h"

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(x) (x)*(x)
#define loop(i,v,n) for(int i=v;i<n;i++)
#define loopR(i,v,n) for(int i=v;i>=n;i--)
#define LSOne(i) (i&-(i))

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<bool> vb;
typedef vector<ll> vll;

#define K -1
#define A -2
#define N -3
#define C -4
#define E -5

ll NOT(ll val, ll max) {
    return (~val + max)+1;
}
ll AND(ll val_a, ll val_b) {
    return (val_a&val_b);
}
ll OR(ll val_a, ll val_b) {
    return (val_a|val_b);
}
ll IMP(ll val_a, ll val_b, ll max) {
    return (OR(NOT(val_a, max),val_b));
}
ll EQU(ll val_a, ll val_b, ll max) {
    return (AND(IMP(val_a, val_b, max),IMP(val_b, val_a, max)));
}

void solution() {
    ll opn_1, opn_2, oper;
    string WFF;
    bool p, q, r, s, t;
    int num_ops;
    int num_divs;
    int interval;
    bool pass;
    int num_aux;
    ll max_val;
    unordered_map<char,ll> values;
    while(cin >> WFF) {
        max_val = 0;
        p = q = r = s = t = 0;
        values.clear();
        stack<ll> operations;
        num_ops = 0;
        if (WFF == "0") break;
        loop(i, 0, WFF.size()) {
            if (WFF[i] == 'p') {
                values['p'] = 0;
                p = 1;
            } else if (WFF[i] == 'q') {
                values['q'] = 0;
                q = 1;
            } else if (WFF[i] == 'r') {
                values['r'] = 0;
                r = 1;
            } else if (WFF[i] == 's') {
                values['s'] = 0;
                s = 1;
            } else if (WFF[i] == 't') {
                values['t'] = 0;
                t = 1;
            }
        }
        pass = false;
        num_ops = p + q + r + s + t;
        num_ops = pow(2, num_ops);
        num_divs = 1;
        interval = num_divs;
        for (auto& val : values) {
            loop(i, 0, num_ops) {
                if (pass)
                    val.S += pow(2, i);
                interval--;
                if (interval <= 0) {
                    pass = !pass;
                    interval = num_divs;
                }
            }
            num_divs *= 2;
            interval = num_divs;
            pass = false;
        }
        loop(i, 0, num_ops)
            max_val += pow(2, i);
        
        loopR(i, WFF.size()-1, 0) {
            if (WFF[i] == 'p' || WFF[i] == 'q' || WFF[i] == 'r' || WFF[i] == 's' || WFF[i] == 't')
                operations.push(values[WFF[i]]);
            else {
                if (WFF[i] == 'K') {
                    opn_1 = operations.top();
                    operations.pop();
                    opn_2 = operations.top();
                    operations.pop();

                    operations.push(AND(opn_1, opn_2));
                } else if (WFF[i] == 'A') {
                    opn_1 = operations.top();
                    operations.pop();
                    opn_2 = operations.top();
                    operations.pop();
                    
                    operations.push(OR(opn_1, opn_2));
                } else if (WFF[i] == 'N') {
                    opn_1 = operations.top();
                    operations.pop();

                    operations.push(NOT(opn_1, max_val));
                } else if (WFF[i] == 'C') {
                    opn_1 = operations.top();
                    operations.pop();
                    opn_2 = operations.top();
                    operations.pop();

                    operations.push(IMP(opn_1, opn_2, max_val));
                } else {
                    opn_1 = operations.top();
                    operations.pop();
                    opn_2 = operations.top();
                    operations.pop();

                    operations.push(EQU(opn_2, opn_1, max_val));
                }
            }
        }
        cout << (operations.top() == max_val ? "tautology" : "not") << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}