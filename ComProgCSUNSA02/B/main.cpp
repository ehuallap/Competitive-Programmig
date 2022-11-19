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

int MAX = 200000;
vll gems(MAX+1, 0);
int n;

void update(int index, ll value) {
    while (index <= n) {
        gems[index] += value;
        index += LSOne(index);
    }
}

ll sum_q(int index) {
    ll sum = 0;
    while(index > 0) {
        sum += gems[index];
        index -= LSOne(index);
    }
    return sum;
}

ll sum_q(int b_index, int e_index) {
    return (sum_q(b_index)-sum_q(e_index-1));
}

void solution() {
    int q;
    string types;
    cin >> n >> q;
    loop(i,0,6)
        cin >> gems[i];
    cin >> types;
    loop(i, 0, types.length())
        update(i+1, types[i]-'0');
    while(q--) {
        int op; cin >> op;
        if (op == 1) {
            int K, P;
            cin >> K >> P;
            update(K, gems[P-1]);
        } else if (op == 2) {
            int P, V;
            cin >> P >> V;
            gems[P-1] = V;

        } else { // op == 3
            int L, R;
            cin >> L >> R;
            cout << sum_q(L, R) << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solution();
    return 0;
}
