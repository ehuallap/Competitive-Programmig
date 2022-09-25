#include <iostream>
using namespace std;

int main()
{
    int x;
    int cont=1;
    cin>>x;
    if(x%5 == 0)
        cout << x/5 << endl;
    else{
        while(x>5){
            cont++;
            x-=5;
        }
        cout << cont << endl;
    }
    return 0;
}
