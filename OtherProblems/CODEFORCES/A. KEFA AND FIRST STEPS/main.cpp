#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll n, a;
    ll backup = 0;
    ll countND = 0;
    ll maxND = 0;
    cin>>n;
    while(n--) {
        cin>>a;
        if(a>=backup) {
            countND++;
        }else {
            if (countND > maxND)
                maxND = countND;
            countND = 1;
        }
        backup = a;
    }
    countND > maxND ? maxND=countND : maxND=maxND;
    cout << maxND << endl;
    return 0;
}
