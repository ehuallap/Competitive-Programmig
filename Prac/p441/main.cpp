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
typedef vector<int> vb;

void solution() {
    //ofstream out("out.txt");
    const int kSubset_limit = 6;
    int num_k, position_replaced;
    string string_s;
    cin >> num_k;
    while(num_k != 0) {
        cin >> string_s;
        position_replaced = string_s.size() - (abs(int(string_s.size())-num_k-1));
        string result = string_s.substr(0, position_replaced);
        for(int i=position_replaced; i>0; i--) {
            result[i] = string_s[i+1];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solution();
    return 0;
}
