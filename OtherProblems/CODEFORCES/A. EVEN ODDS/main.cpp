#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main()
{
    ll n, k;
    cin>>n>>k;
    if (n%2 == 0)
        k > (n/2) ? cout << 2*(k-(n/2)) << endl : cout << (2*k)-1 << endl;
    else
        k > ((n+1)/2) ? cout << 2*(k-((n+1)/2)) << endl : cout << (2*k)-1 << endl;
    return 0;
}
