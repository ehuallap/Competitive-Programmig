#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>mag(3,0);
    int n,x,y,z;
    cin>>n;
    while(n--){
        cin>>x>>y>>z;
        mag[0]+= x;
        mag[1]+= y;
        mag[2]+= z;
    }

    if(mag[0] == 0 && mag[1] == 0 && mag[2] == 0)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;
    return 0;
}
