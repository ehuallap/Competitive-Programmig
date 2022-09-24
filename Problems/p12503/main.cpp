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
#define print(i,V) for(auto i:V) cout << i << endl;

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

void solution() {
    int numT, numN;
    vc instructions;
    cin >> numT;
    while(numT--) {
        cin >> numN;
        int pos = 0;
        instructions.clear();
        while(numN--) {
            string instruccion;
            cin >> instruccion;
            if (instruccion[0] == 'L') {
                pos += -1;
                instructions.PB('L');
            } else if (instruccion[0] == 'R') {
                pos += 1;
                instructions.PB('R');
            } else if (instruccion[0] == 'S'){
                cin >> instruccion;
                cin >> instruccion;
                int numPos = atoi(instruccion.c_str());
                instructions.PB(instructions[numPos-1]);
                instructions[instructions.size()-1] == 'R' ? pos += 1 : pos += -1;
            }
        }
        cout << pos << endl;
    }
}

int main() {
    solution();
    return 0;
}
