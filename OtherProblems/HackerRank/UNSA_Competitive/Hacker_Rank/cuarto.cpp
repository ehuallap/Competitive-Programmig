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
#define ll long long
#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define PII pair<long long, long long>
#define MAXM 100005
#define SQ(x) (x)*(x)
#define loop(i,v,n) for(int i=v;i<n;i++)
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

class Set
{
public:
    ll rank[MAXM], parent[MAXM], machine[MAXM];
    Set()
    {
        for (int i = 0; i < MAXM; ++i)
        {
            rank[i] = 0;
            parent[i] = i;
        }
    };
    ll find( ll node )
    {
        if ( parent[node] != node )
            return find( parent[node] );
        return node;
    }
    void merge( ll node1, ll node2 )
    {
        ll parent1 = find( node1 );
        ll parent2 = find( node2 );
        if ( rank[parent1] < rank[parent2] )
            parent[ parent1 ] = parent2;
        else if ( rank[parent2] < rank[parent1] )
            parent[ parent2 ] = parent1;
        else if ( rank[ parent1 ] == rank[ parent2 ] )
        {
            parent[ parent2 ] = parent1;
            rank[parent1]++;
        }
    }
    bool isConnected( ll node1, ll node2 )
    {
        return (find(node1) == find(node2));
    }
};

std::vector< pair< long long, PII > > edge, final;
std::vector< PII > E[MAXM];
ll cost[MAXM];

void minimize( ll source, ll parent = -1 )
{
    for (int i = 0; i < E[source].size(); ++i)
    {
        if ( E[source][i].X != parent )
        {
            cost[ E[source][i].X ] = max(cost[ source ] , E[source][i].Y);
            minimize( E[source][i].X, source );
        }
    }
}

void solution() {
    ll M, N, a, b, c;
    cin >> N >> M;
    memset(cost, 0, sizeof cost);
    Set S;
    for (int i = 0; i < M; ++i)
    {
        cin >> a >> b >> c;
        a--;
        b--;
        edge.pb( mp(c, mp(a, b) ) );
    }
    sort( edge.begin(), edge.end() );
    for (int i = 0; i < M; ++i)
    {
        if ( !S.isConnected( edge[i].Y.X, edge[i].Y.Y ) )
        {
            final.pb( edge[i] );
        }
        S.merge( edge[i].Y.X, edge[i].Y.Y );
    }
    for (int i = 0; i < final.size(); ++i)
    {
        E[ final[i].Y.X ].pb( mp( final[i].Y.Y, final[i].X ) );
        E[ final[i].Y.Y ].pb( mp( final[i].Y.X, final[i].X ) );
    }
    cost[0] = 0;
    minimize( 0 );
    if( cost[N-1] )
       cout << cost[N-1] << '\n';
    else
       cout << "NO PATH EXISTS\n";
}

int main() {
    solution();
    return 0;
}
