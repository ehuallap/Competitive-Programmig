#include <iostream>
using namespace std;

int main()
{
    int k,n,w;
    int total=0;
    cin>>k>>n>>w;

    for(int i=0;i<w;i++){
        total+= k*(i+1);
    }
    if(total>n)
        cout << total-n <<endl;
    else
        cout << 0 <<endl;
    return 0;
}
