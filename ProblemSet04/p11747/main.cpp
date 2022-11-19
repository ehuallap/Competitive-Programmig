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

struct edge{
    int u,v,w;
    edge(int _u,int _v,int _w){
        u = _u;
        v = _v;
        w = _w;
    }
};

vector<edge> lista;
vector<int> out;
int par[1003];

int comparar(edge a, edge b){
    return a.w < b.w;
}

int find(int a){
    if(a == par[a]){
        return a;
    }
    return (par[a]= find(par[a]));
}

void unir(int x,int y){
    if(x>y){
        par[y] = x;
    }
    else{
        par[x] = y;
    }
}

//Arbol de expansión minimo
void mst(int m){
    int x,y;
    for(int i=0;i<m;i++){
        x = find(lista[i].u);
        y = find(lista[i].v);
        if(x!=y){
            unir(x,y);
        }
        else{
            out.push_back(lista[i].w);
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,m;
    while (cin>>n>>m && n!=0 && m!=0){
        for(int i=0;i<=n;i++){
            par[i] = i;
        }
        lista.clear();
        out.clear();
        
        for(int i=0;i<m;i++){
            int u,v,w;
            cin>>u>>v>>w;
            lista.push_back(edge(u,v,w));
        }

        sort(lista.begin(),lista.end(),comparar);

        mst(m);
        
        if(out.size() == 0){
            cout<<"forest\n";
        } else{
            sort(out.begin(),out.end());
            cout<<out[0];
            for(int i=1;i<out.size();i++){
                cout<<" "<<out[i];
            }
            cout<<endl;
        }

    }
    return 0;
}