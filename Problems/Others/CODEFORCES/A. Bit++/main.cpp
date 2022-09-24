#include <iostream>
using namespace std;

int main()
{
    int n,x=0;
    string operation;
    cin>>n;
    while(n--){
        cin>>operation;
        if(operation[0] == '+' || operation[2] == '+')
            x+=1;
        else
            x-=1;
    }
    cout << x << endl;
    return 0;
}
