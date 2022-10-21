#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <cstdio>
#include <queue>
#include <map>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <stack>
#include <algorithm>
#include <cstring>

#define max(a,b) (a<b?b:a)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(x) (x)*(x)
#define loop(i,v,n) for(int i=v;i<n;i++)

#define LSOne(i) ((i)&-(i))
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<bool> vb;
typedef vector<ll> vll;

int MAX = 5000000;
vll FT(MAX+1, 0);
ll n;

void update(int index, ll value) {
    while (index <= n) {
        FT[index] += value;
        index += LSOne(index);
    }
}

ll sum_q(int index) {
    ll sum = 0;
    while(index > 0) {
        sum += FT[index];
        index -= LSOne(index);
    }
    return sum;
}

void solution() {
    int q;
    cin >> n >> q;
    while(q--) {
        char op; cin >> op;
        if (op == '+') {
            int index;
            ll value;
            cin >> index >> value;
            update(index+1, value);
        } else {
            int index;
            cin >> index;
            cout << sum_q(index) << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solution();
    return 0;
}
