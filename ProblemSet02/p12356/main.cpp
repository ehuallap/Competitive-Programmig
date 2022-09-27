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
typedef vector<int> vb;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

void solution() {
    //ofstream out("out.txt");
    int numS, numB;
    vb alive;
    while(1){
        scanf("%i %i", &numS, &numB);
        if (numS == 0 && numB == 0) {
            printf("%c", '-');
            return;
        }
        alive.reserve(numS); alive.resize(numS, true);
        int origI = 1, origF = numS;
        loop(i, 0, numB) {
            int posI, posF;
            scanf("%i %i", &posI, &posF);
            if (posI <= origI)
            if (posF <= origF) 
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    solution();
    return 0;
}
