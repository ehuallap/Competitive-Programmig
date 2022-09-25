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
    int numCases; scanf("%i", &numCases);
    while(numCases--) {
        int numA, numB; scanf("%i %i", &numA, &numB);
        if (numA < numB) printf("%c\n", '<');
        else if (numA > numB) printf("%c\n", '>');
        else printf("%c\n", '=');
    }
}

int main() {
    solution();
    return 0;
}
