#include "bits/stdc++.h"

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(x) (x)*(x)
#define loop(i,v,n) for(int i=v;i<n;i++)
#define LSOne(i) (i&-(i))

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<bool> vb;
typedef vector<ll> vll;

void solution() {
    vi results;
    int a, b, c;
    while(cin >> a >> b >> c) {
        results.clear();
        results.push_back((a*b)+c);
        results.push_back(a+(b*c));
        results.push_back((a+b)*c);
        results.push_back(a*(b+c));
        results.push_back(a+c+b);
        sort(results.begin(), results.end());
        cout << max(a*b*c, results[results.size()-1]) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}
