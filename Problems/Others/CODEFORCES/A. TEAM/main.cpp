#include <iostream>
using namespace std;

int main()
{
    int n,a,b,c;
    int cont=0;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if(a+b+c>=2)
            cont+=1;
    }
    cout << cont << endl;
    return 0;
}
