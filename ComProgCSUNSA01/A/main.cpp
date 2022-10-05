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
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

bool isJolly(int numElements) {
    vi nums;
    int num;
    loop(i, 0, numElements) {
        scanf("%i", &num); 
        nums.PB(num);
    }
    vb diffSet(numElements, false);
    for (int i=0; i < numElements-1 ; i++) {
        int d = abs(nums[i]-nums[i+1]);
        if (d == 0 || d > numElements-1 || diffSet[d] == true)
            return false;
        diffSet[d] = true;
    }
 
    return true;
}
 

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int numElements;
    while(scanf("%i", &numElements) != EOF) {
        if (isJolly(numElements))
            printf("%s\n", "Jolly");
        else
            printf("%s\n", "Not jolly");
    }
    return 0;
}
