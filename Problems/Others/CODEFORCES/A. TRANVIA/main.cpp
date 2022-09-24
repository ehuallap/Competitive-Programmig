#include <iostream>
using namespace std;

int main()
{
    int n,a,b,sum = 0,mayor = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        sum += b;
        sum -= a;
        if (sum>mayor)
            mayor = sum;
    }
    cout << mayor << endl;
    return 0;
}
