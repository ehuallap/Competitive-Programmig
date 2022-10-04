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
#define loopR(i,v,n) for(int i=v;i>n;i--)
#define print(i,V) for(auto &i : V) cout << i << endl;
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<int> vb;

void solution() {
    //ofstream out("out.txt");
    int numCases, ampl, freq;
    scanf("%i", &numCases);
    scanf("");
    while (numCases--) {
        scanf("%i %i", &ampl, &freq);
        loop(i, 0, freq) {
            loop(j, 0, ampl) {
                printf("%s\n", string(j+1, (j+1)+'0').c_str());
            }
            loopR(j, ampl-1, 0) {
                printf("%s\n", string(j, j+'0').c_str());
            }
            if (i != freq-1)
                printf("\n");
        }
        if (numCases != 0)
            printf("\n");
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    solution();
    return 0;
}
