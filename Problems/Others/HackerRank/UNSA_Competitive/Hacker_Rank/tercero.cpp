#include <cmath>
#include <climits>
#include <queue>
#include <vector>
#include <map>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <regex>
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
    regex numbers ("\[0123456789]");
    regex lower_case ("\[abcdefghijklmnopqrstuvwxyz]");
    regex upper_case ("\[ABCDEFGHIJKLMNOPQRSTUVWXYZ]");
    regex special_characters ("\[!@#$%^&*()+]");
    regex space ("\[-]");
    int longitud;
    int cumple = 0;

    string password;
    cin >> longitud;
    cin.ignore();
    getline(cin, password);

    if (regex_search(password, numbers)) {
        cumple += 1;
    }
    if (regex_search(password, lower_case)) {
        cumple += 1;
    }
    if (regex_search(password, upper_case)) {
        cumple += 1;
    }
    if (regex_search(password, special_characters) || regex_search(password, space)) {
        cumple += 1;
    }
    int completar = longitud>=6 ? 0: 6-longitud;
    if (completar >= (4-cumple)) {
        cout << completar << endl;
    } else {
        cout << 4-cumple << endl;
    }
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    solution();
    return 0;
}
