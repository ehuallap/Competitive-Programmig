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
#include <string>

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

int main() {
    string oracion;
    getline(cin, oracion);
    for(int i=0; i<oracion.length(); i++) {
        if (oracion[i] == ' '){
            oracion.erase(i,1);
            i--;
        }
    }
    int fil=sqrt(oracion.length());
    int col;
    if(fil*fil==oracion.length()) col=fil;
    else col=fil+1;
    if(fil*col<oracion.length()) fil++;

    for(int i=0;i<col;i++){
        for(int u=i;u<oracion.length();u+=col){
            cout<<oracion[u];
        }
        cout<<" ";
    }
    return 0;
}
