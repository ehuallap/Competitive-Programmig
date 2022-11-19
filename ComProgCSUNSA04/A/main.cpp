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

#define MAX 1000000
vi sticks(MAX+1, 0);

void solution() {
    int n, m;
    int a, b;
    bool cycle = false;
    bool disconnected = false;
    int initial, path;
    int nodes_count = 0;
    while(cin >> n >> m) {
        sticks.assign(MAX+1, 0);
        loop(i, 0, m) {
            cin >> a >> b;
            if (a == 0 && b == 0) break;
            if (i==0)
                initial = a;
            if ((sticks[a] != 0 || sticks[b] != 0) && (sticks[a] != b))
                cycle = true;
            sticks[a] = b;
        }
        a = initial;
        do {
            path = sticks[initial];
            nodes_count++;
            initial = path;
        } while (path != 0);
        if (nodes_count != n)
            disconnected = true;
        if (cycle || disconnected)
            cout << "IMPOSSIBLE" << endl;
        else {
            cout << a << endl;
            while (sticks[a] != 0) {
                cout << sticks[a] << endl;
                a = sticks[a];
            }
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
