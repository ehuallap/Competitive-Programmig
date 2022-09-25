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

void solution() {
    //ofstream out("out.txt");
    int numCases; scanf("%i", &numCases);
    loop(i, 0, numCases) {
        int numMons;
        int highestV = -1;
        int actualV;
        scanf("%i", &numMons);
        loop(j, 0, numMons) {
            scanf("%i", &actualV);
            actualV > highestV ? highestV = actualV : highestV = highestV;
        }
        printf("Case %i: %i\n", i+1, highestV);
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    solution();
    return 0;
}
