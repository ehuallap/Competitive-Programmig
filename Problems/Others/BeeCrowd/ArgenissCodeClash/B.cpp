#include <cmath>
#include <climits>
#include <queue>
#include <map>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stack>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

#define max(a,b) (a<b?b:a)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(x) (x)*(x)
#define loop(i,v,n) for(int i=v;i<n;i++)

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

int nextPosI(int numLogs, int numPos, int dir) {
    int newPos = numPos + dir;
    if (newPos < 0) return numLogs-1;
    return newPos % numLogs;
}

void solution() {
    int numLogs, numIndi;
    cin >> numLogs >> numIndi;
    
    vb posIndi;
    vi dirIndi;

    posIndi.reserve(numLogs);
    posIndi.resize(numLogs, false);
    dirIndi.reserve(numLogs);
    dirIndi.resize(numLogs, 0);

    loop(i, 0, numIndi) {
        int pos; cin >> pos;
        posIndi[pos-1] = true; cin >> dirIndi[pos-1];
    }
    /*loop(i, 0, numLogs)
        cout << posIndi[i].F << " " << posIndi[i].S << endl;*/
    vb auxPosIndi = posIndi;
    
    loop(i, 0, numLogs) {
        if (!posIndi[i]) continue;
        int sigPos = nextPosI(numLogs, i, dirIndi[i]);
        if (dirIndi[sigPos]*(-1) == dirIndi[i]) {

        } else {
            if (dirIndi[sigPos] == 0) {
                posIndi[i] = false; posIndi[sigPos] = true;
                dirIndi[sigPos] = dirIndi[i]; dirIndi[i] = 0;
                i++;
            } else {
                posIndi[i] = false; dirIndi[i] = 0;
                posIndi[nextPosI(numLogs, sigPos, dirIndi[sigPos])] = true;
            }
        }
    }
}

int main() {
    solution();
    return 0;
}