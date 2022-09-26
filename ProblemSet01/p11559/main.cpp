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
    //ofstream out("out.txt", ios::app);
    int numParti, numBudg, numHote, numWeeks;
    while (scanf("%i %i %i %i", &numParti, &numBudg, &numHote, &numWeeks)) {
        bool canStay = true;
        int minTotalCost = INT_MAX;
        loop(i, 0, numHote) {
            canStay = true;
            int costPers;
            scanf("%i", &costPers);
            int numBeds;
            loop(j, 0, numWeeks) {
                scanf("%i", &numBeds);
                if (!canStay) continue;
                if (numBeds < numParti) canStay = false;
            }
            if (canStay)
                if (costPers*numParti < minTotalCost)
                    minTotalCost = costPers*numParti;
        }
        minTotalCost != INT_MAX ? printf("%i\n", minTotalCost) : printf("%s\n", "stay home");
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    solution();
    return 0;
}
