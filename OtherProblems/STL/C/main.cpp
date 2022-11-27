#include "bits/stdc++.h"

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(x) (x)*(x)
#define loop(i,v,n) for(int i=v;i<n;i++)
#define LSOne(i) (i&-(i))

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<bool> vb;
typedef vector<ll> vll;

void solution() {
    string input;
    bool balanced;
    while(cin >> input) {
        balanced = true;
        stack<char> rules;
        loop(i, 0, input.size()) {
            if (input[i] == '(') {
                rules.push('(');
            } else {
                if (rules.empty() || rules.top() != '(') {
                    balanced = false;
                    break;
                }
                rules.pop();
            }
        }
        if (!balanced || rules.size() > 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}
