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

#define r 114
#define k 107
#define Q 81
#define K 75

void solution() {
    //ofstream out("out.txt");
    int numProblems;

    char piece;
    int rows, columns;

    cin >> numProblems;
    loop (i, 0, numProblems){
        cin >> piece >> rows >> columns;
        switch (int(piece)) {
            case (r): {
                cout << min(rows, columns) << endl;
                break;
            }
            case (k): {
                cout << (rows*columns)/2 + ((rows*columns)%2 != 0) ? 0 : 1;
                cout << endl;
                break;
            }
            case (Q): {
                cout << min(rows, columns) << endl;
                break;
            }
            case (K): {
                cout << ((rows+1)/2)*((columns+1)/2) << endl;
                break;
            }
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solution();
    return 0;
}
