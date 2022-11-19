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

int MAX = 1024000;
int n;
vll FT(MAX+1, 0);

void update(int index, ll value) {
    while (index <= n) {
        FT[index] += value;
        index += LSOne(index);
    }
}

ll sum_q(int index) {
    ll sum = 0;
    while(index > 0) {
        sum += FT[index];
        index -= LSOne(index);
    }
    return sum;
}

ll sum_q(int b_index, int e_index) {
    return (sum_q(b_index)-sum_q(e_index-1));
}

void solution() {
    //ofstream out("out.txt");
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}
