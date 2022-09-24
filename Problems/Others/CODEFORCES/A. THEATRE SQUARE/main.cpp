#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    unsigned long long int n,m,a,r;
    scanf("%llu",&m);
    scanf("%llu",&n);
    scanf("%llu",&a);
    r = ((m+a-1)/a)*((n+a-1)/a);
    if(a != 0)
        cout << r << endl;
    else
        cout << 0 <<endl;
    return 0;
}
