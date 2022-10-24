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

#define SQUA 0
#define BOMB -1

void solution() {
    //ofstream out("out.txt");
    int n, m;
    int num = 1;
    string line;
    do {
        cin >> n >> m;
        vector<vi> game(n,vi(m,0));
        if (!n && !m)
            break;
        loop(i, 0, n) {
            cin >> line;
            loop(j, 0, m) {
                game[i][j] = (line[j] == '*' ? BOMB : game[i][j]);
                if(game[i][j] == BOMB) {
                    if(i >= 1 || j >= 1) {
                        if(i >= 1 && game[i-1][j] != BOMB)
                            game[i-1][j]++;
                        if (i >= 1 && j < m-1 && game[i-1][j+1] != BOMB)
                                game[i-1][j+1]++;
                        if (j >= 1 && game[i][j-1] != BOMB)
                            game[i][j-1]++;
                        if (i >= 1 && j >= 1 && game[i-1][j-1] != BOMB)
                            game[i-1][j-1]++;
                    }
                    if (i < n-1 || j < m-1) {
                        if (i < n-1 && game[i+1][j] != BOMB)
                            game[i+1][j]++;
                        if (i < n-1 && j >= 1 && game[i+1][j-1] != BOMB)
                                game[i+1][j-1]++;
                        if (j < m-1 && game[i][j+1] != BOMB)
                            game[i][j+1]++;
                        if (i < n-1 && j < m-1 && game[i+1][j+1] != BOMB)
                            game[i+1][j+1]++;
                    }
                }
            }
        }
        if (num > 1)
            cout << endl;
        cout << "Field #" << num++ << ":" << endl;
        loop(i, 0, n) {
            loop(j, 0, m) {
                if(game[i][j] == -1)
                    cout << '*';
                else
                    cout << game[i][j];
            }
            cout << endl;
        }    
    } while(1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}
