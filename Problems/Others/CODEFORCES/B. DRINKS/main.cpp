#include <iostream>

using namespace std;

int main()
{
    int n, p;
    float fraction = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p;
        fraction+=p;
    }
    fraction /= n;
    cout << fraction << endl;
    return 0;
}
