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
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<bool> vb;
typedef vector<ll> vll;

#define VISITED true
#define UNVISITED false
#define letras 26
vvi AL;
vb dfs_num;
vi ts;

void topsort(int u) {
    dfs_num[u] = VISITED;
    for (auto &v : AL[u])
        if (dfs_num[v] == UNVISITED)
            topsort(v);
    ts.push_back(u);
}
void solution() {
    AL.clear();
    AL.resize(letras);
    dfs_num.assign(letras, UNVISITED);
    ts.clear();
    string ls;
    while(cin >> ls) {
        if (ls == "#") break;
        for(int i=ls.size()-1; i>0; i--) {
            int son = int(ls[i])-65;
            int father = int(ls[i-1])-65;
            if (son != father && find(AL[son].begin(), AL[son].end(), father) == AL[son].end())
                AL[son].push_back(father);
        }
    }
    loop(i, 0, 26) {
        cout << char(i+65) << " ";
        loop(j, 0, AL[i].size()) {
            cout << char(AL[i][j]+65) << " ";
        }
        cout << endl;
    }
    
    loop(u, 0, letras)
        if (dfs_num[u] == UNVISITED && AL[u].size() > 0)
            topsort(u);
    reverse(ts.begin(), ts.end());
    for (auto &u: ts)
        cout << " " << char(u+65);
    cout << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}
