#include <cmath>
#include <climits>
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
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

#define NUMLINKS 10

void solution() {
    int higRel =- 1;
    int numCases;
    vs relevantLinks;
    string link;
    int relev;
    cin >> numCases;
    for(int i=0; i<numCases; i++) {
        relevantLinks.clear();
        higRel = -1;
        loop(i, 0, NUMLINKS) {
            cin >> link >> relev;
            if (relev > higRel) {
                higRel = relev;
                relevantLinks.clear();
                relevantLinks.PB(link);
            } else if (relev == higRel) {
                relevantLinks.PB(link);
            }
        }
        cout << "Case #" << i+1 << ":" << endl;
        for(int i=0; i<relevantLinks.size(); i++)
            cout << relevantLinks[i] << endl;
    }
}

int main() {
    solution();
    return 0;
}
