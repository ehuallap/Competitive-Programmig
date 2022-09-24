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
    int n;
    string indentado = "";
    string stair="";
    cin >> n;
    for(int i=1; i<=n; i++) {
        indentado = stair = "";
        for(int j=i;j<n;j++) indentado += " ";
        for(int k=i;k>0;k--) stair += "#";
        cout << indentado << stair;
        cout << endl;
    }
}

int main() {
    solution();
    return 0;
}
