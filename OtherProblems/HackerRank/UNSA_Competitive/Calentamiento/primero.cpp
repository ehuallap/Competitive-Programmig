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
    ll min = 0;
    ll max = 0;
    ll elem;
    vector<ll>conjunto;
    for(int i=0; i<5; i++) {
        cin >> elem;
        conjunto.push_back(elem);
    }
    sort(conjunto.begin(), conjunto.end());
    min += conjunto[0];
    min += conjunto[1];
    min += conjunto[2];
    min += conjunto[3];

    max += conjunto[1];
    max += conjunto[2];
    max += conjunto[3];
    max += conjunto[4];
    cout << min << " " << max << endl;
}

int main() {
    solution();
    return 0;
}
