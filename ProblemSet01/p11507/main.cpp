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
    int wireL;
    char dir[3];

    while (true) {
        scanf("%i", &wireL);
        if (wireL == 0) break;
        wireL--;
        int sign = 1;
        char axis = 'x';

        loop(i, 0, wireL) {
            scanf("%s", &dir);
            if (dir[0] == 'N') continue;
            if ((axis == 'x' && dir[0] == '-') || (axis == 'y' && dir[0] == '+' && dir[1] == 'y') || (axis == 'z' && dir[0] == '+' && dir[1] == 'z'))
                sign *= -1;
            if (axis == 'x')
                axis = dir[1];
            else if ((axis == 'z' && dir[1] == 'z') || (axis == 'y' && dir[1] == 'y'))
                axis = 'x';
        }
        printf("%c%c\n", sign == 1 ? '+' : '-', axis);
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    solution();
    return 0;
}
