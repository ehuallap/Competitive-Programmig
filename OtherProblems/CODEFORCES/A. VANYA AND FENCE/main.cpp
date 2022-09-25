#include <iostream>
using namespace std;

int main()
{
    int n, h, a;
    int total = 0;
    cin>>n>>h;
    for(int i=0; i<n; i++) {
        cin>>a;
        if (a > h)
            total+=2;
        else
            total+=1;
    }
    cout << total << endl;
    return 0;
}
