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

#define max(a,b) (a<b?b:a)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(x) (x)*(x)
#define loop(i,v,n) for(int i=v;i<n;i++)
#define print(i,V) for(auto &i : V) cout << i << endl;
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<int> vb;

void solution() {
    //ofstream out("out.txt");
    int numM, numN;
    while(1) {
        cin >> numM >> numN;
        if (numM == 0 && numN == 0)
            break;
        if (numM == 0 || numN == 0) {
            cout << 0;
        } else if (numM < 3 || numN < 3) {
            if (numM == 1 || numN == 1)
                cout << max(numM, numN);
            else
                cout << int(((((numM*numN)/4)+1)/2)*4) + (((numM%2 != 0 || numN%2 != 0) && (((numM == 2 ? numN : numM)-1)%4 == 0)) ? 2 : 0);
        } else {
            cout << (numM*numN)/2 + (((numM*numN)%2 != 0) ? 1 : 0);
        }
        cout << " knights may be placed on a " << numM << " row " << numN << " column board." << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solution();
    return 0;
}
