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
typedef pair<int,int> pii;
typedef vector<pii> vpii;

void solution() {
    ll cases;
    ll initial;
    ll jumps;

    cin>>cases;
    while(cases--) {
        cin>>initial>>jumps;
        if (initial%2 == 0) {
            if (jumps==1)
                cout << initial-1 << endl;
        } else {
            if (jumps==1)
                cout << initial+1 << endl;
            else if ((jumps-2)%4 == 0 || jumps-2 == 0)
                cout << initial-1 << endl;
            else if ((jumps-3)%4 == 0 || jumps-3 == 0)
                cout << initial - (jumps+1) << endl;
            else if (jumps%4 == 0)
                cout << initial << endl;
            else if ((jumps-5)%4 == 0 || jumps-5 == 0)
                cout << jumps << endl;
        }
    }
}

int main() {
    solution();
    return 0;
}
