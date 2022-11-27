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
    int n;
    ll k;
    bool winner;
    int winner_p;
    int games_row;
    int p1, p2;
    while(cin >> n >> k) {
        queue<int> powers;
        games_row = 0;
        winner = false;
        winner_p = 0;
        loop (i, 0, n) {
            cin >> p1;
            powers.push(p1);
        }
        if (k > n) {
            p1 = powers.front();
            powers.pop();
            while (!powers.empty()) {
                p1 = (powers.front() > p1 ? powers.front() : p1);
                powers.pop();
            }
        } else {
            p1 = powers.front();
            powers.pop();
            while(!winner) {
                if (games_row >= k) {
                    winner = true;
                    break;
                }
                p2 = powers.front();
                powers.pop();
                if (p1 > p2) {
                    games_row++;
                    powers.push(p2);
                } else {
                    powers.push(p1);
                    p1 = p2;
                    games_row = 1;
                }
            }
        }
        cout << p1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}
