//Ejercicio  17 - 2
//Mice and Maze

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

using namespace std;
typedef pair<int,int> aux;
vector<aux> lista[101];
int distancia[101];

int dijkstra(int N,int E,int T){
    priority_queue<aux> arr;
    for(int i=1;i<=N;i++){
        distancia[i] = INT_MAX;
    }
    arr.push(aux(E,0));
    distancia[E] = 0;
    int a,b,w,cost;
    while(!arr.empty()){
        a = arr.top().first;
        cost = arr.top().second;
        arr.pop();
        if(distancia[a] == cost && distancia[a] <=T){
            for(int i=0;i<(int)lista[a].size();i++){
                b = lista[a][i].first;
                w = lista[a][i].second;
                if(distancia[a] + w < distancia[b]){
                    distancia[b] = distancia[a]+w;
                    arr.push(aux(b,distancia[b]));
                }
            }
        }
    }
    int r=0;
    for(int i=1;i<=N;i++){
        if(distancia[i]<=T){
            r++;
        }
    }
    return r;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int casos;
    cin >> casos;
    int N,E,T,M;
    int a,b,w;
    while(casos--){
        cin>>N>>E>>T>>M;
        for(int i=0;i<M;i++){
            cin>>a>>b>>w;
            lista[b].push_back(aux(a,w));
        }
        cout<<dijkstra(N,E,T)<<"\n";
        if(casos)cout<<endl;
        //vaciar
        for(int i=0;i<=N;i++){
            lista[i].clear();
        }
    }

    return 0;
}