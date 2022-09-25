#include <iostream>
using namespace std;

int main()
{
    int n;
    string a = "I hate ", b = "I love ";
    cin>>n;
    for (int i=0; i<n; i++) {
        if (i%2 == 0)
            cout << a;
        else
            cout << b;
        if (i==n-1)
            cout << "it ";
        else
            cout << "that ";
    }
    return 0;
}
