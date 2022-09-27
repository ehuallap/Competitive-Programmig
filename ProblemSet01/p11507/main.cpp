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

#define x+ 180
#define x- -180
#define y+ 90
#define y- -90
#define z+ 45
#define z- -45

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

void solution() {
    //ofstream out("out.txt");
    int wireL;
    scanf("%i", &wireL);
    int lastPart = 180;
    loop(i, 0, wireL-1) {
        char dir[2];
        scanf("%s", dir);
        switch (dir[0]) {
            case 'x':
                if (dir[1] == '+')
                    lastPart -= 180;
                else
                    lastPart += 180;
                break;
            case 'y':
                if (dir[1] == '+')
                    lastPart -= 90;
                else
                    lastPart += 90;
                break;
            case 'z':
                if (dir[1] == '+')
                    lastPart -= 45;
                else
                    lastPart += 45;
                break;
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    solution();
    return 0;
}
