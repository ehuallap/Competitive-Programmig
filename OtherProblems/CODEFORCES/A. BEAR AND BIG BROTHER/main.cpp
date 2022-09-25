#include <iostream>
using namespace std;

int main()
{
    int a, b, cont=0;
    cin>>a>>b;
    while(a<=b){
        a*=3;
        b*=2;
        cont+=1;
    }
    cout << cont << endl;
    return 0;
}
