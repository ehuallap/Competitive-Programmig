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
    int cases; cin >> cases;
    int l, n;
    int distance_early, distance_late;
    int max_early;
    int max_late;
    while(cases--) {
        max_early = INT_MIN;
        max_late = max_early;
        cin >> l >> n;
        while(n--) {
            cin >> distance_early;
            distance_late = distance_early;
            distance_early = min(distance_early, l-distance_early);
            distance_late = max(distance_late, l-distance_late);
            if (distance_early > max_early)
                max_early = distance_early;
            //cout << distance_early << " " << distance_late << endl;
            if (distance_late > max_late)
                max_late = distance_late;
        }
        cout << (max_early < 0 ? 0 : max_early) << " " << max_late << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}
