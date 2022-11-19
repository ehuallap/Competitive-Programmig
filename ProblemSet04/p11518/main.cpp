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

#define MAX 10000
using namespace std;

vector <int> grafo[MAX];
bool visitado[MAX];

void derribar(int u,int &total){
	total++;
	visitado[u] = true;
	for(int v = 0; v < grafo[u].size(); v++){
		if(!visitado[grafo[u][v]])			
			derribar(grafo[u][v],total);
	}
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
	int casos, n, m, l, x, y, z;
	cin>>casos;
	while(casos--){
		cin>>n>>m>>l;
		while(m--){
			cin>>x>>y;
			grafo[x].push_back(y);
		}
        int total = 0;
		while(l--){			
			cin>>z;
			if(!visitado[z])		
				derribar(z,total);
		}
		
		cout<<total<<endl;
		fill(visitado, visitado + MAX, false);
		for(int i = 0; i < n; i++){
			grafo[i].clear();
		}
	}
	
	return 0;
}