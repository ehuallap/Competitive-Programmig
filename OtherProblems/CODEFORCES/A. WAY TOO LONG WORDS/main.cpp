#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    string letra;

    cin>>t;
    while(t--){
        cin>>letra;
        if(letra.length()>10)
            cout <<letra[0] << letra.length()-2 << letra[letra.length()-1] <<endl;
        else
            cout <<letra<<endl;
    }
    return 0;
}
