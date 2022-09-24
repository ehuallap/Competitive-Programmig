#include <iostream>
#include <algorithm>
#include <vector>

#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define vvi vector<vi>

using namespace std;

template <typename T>
ostream operator<<(ostream &os, const vector<T> &V) {
    for (int i = 0; i < V.size(); i++) {
        os << V[i];
        i != V.size() - 1 ? os << " " : os << endl;
    }
    return os;
}

int main() {
    int posN;
    int posK;
    cin >> posN >> posK;
    vector<string> V;
    for(int i=0; i<posN; i++) {
        string s;
        cin >> s;
        V.pb(s);
    }
    sort(V.begin(), V.end());
    if (posK > posN)
        cout << V[(posK%posN)-1] << endl;
    else
        cout << V[posK-1] << endl;
    return 0;
}
