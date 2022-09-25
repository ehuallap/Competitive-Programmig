#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n;
    ll taxis = 0;
    ll one = 0;
    ll two = 0;
    ll three = 0;
    ll diff;
    unsigned int s;
    cin>>n;
    while(n--) {
        cin>>s;
        if(s==4)
            taxis++;
        if(s==3)
            three++;
        if(s==2)
            two++;
        if(s==1)
            one++;
    }
    taxis += two/2;
    two = two - (two/2)*2;
    diff = min(three, one);
    three -= diff;
    one -= diff;
    taxis += diff;
    if (three == 0 && one != 0) {
        if(one >= 4) {
            if (two == 1) {
                one-=2;
                two = 0;
                taxis++;
            }
            taxis += one/4;
            one%4 == 0 ? one = 0: one/= 4;
        }

    } else {
        taxis += three;
        taxis += two;
    }
    one >= 1 ? taxis += 1: taxis += 0;
    cout << taxis << endl;
    return 0;
}
