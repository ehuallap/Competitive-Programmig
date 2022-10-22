#include <cmath>
#include <climits>
#include <cstdio>
#include <queue>
#include <vector>
#include <map>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stack>
#include <algorithm>
#include <cstring>

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

#define letras 26

void solution() {
    //ofstream out("out.txt");
    int round;
    string sol;
    string atte;
    while(cin >> round) {
        if (round == -1)
            break;
        cin >> sol >> atte;
        int found = sol.size();
        int remaining = 7;
        vi hash_t(letras, 0);
        if (round == -1)
            break;
        loop (i, 0, sol.size())
            hash_t[int(sol[i]-97)] += 1;
        cout << "Round " << round << endl;
        loop(i, 0, atte.size()) {
            if (hash_t[int(atte[i])-97] == 0) {
                remaining--;
                hash_t[int(atte[i])-97] = -1;
            } else if (hash_t[int(atte[i])-97] != -1) {
                found -= hash_t[int(atte[i])-97];
                hash_t[int(atte[i])-97] = -1;
            }
            if (remaining == 0) {
                cout << "You lose." << endl;
                break;
            } else if (found == 0) {
                cout << "You win." << endl;
                break;
            }
        }
        if (remaining != 0 && found != 0)
            cout << "You chickened out." << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}
