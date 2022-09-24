#include <iostream>
using namespace std;

int main()
{
    int n,k,a;
    cin>>n>>k;
    int cont=0;
    int pos=n-k,res=n,aux=0,aux2=52;
    bool found = false;
    while(n--){
        cin>>a;
        if(n==pos){
            aux=a;
            if(aux==0){
                aux2=n;
                found=true;
            }
        }
        if(a==0)
            cont+=1;
        if(n<pos && a<aux && !found){
            aux2=n;
            found=true;
        }
    }

    if(aux2==52 && aux!=0){
        cout << res-cont << endl;
    }else if(aux==0)
        cout << res-cont << endl;
    else
        cout << res-1-aux2 << endl;

    return 0;
}
