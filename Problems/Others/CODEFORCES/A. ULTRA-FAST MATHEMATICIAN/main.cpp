#include <iostream>
using namespace std;

int main()
{
    string a, b, c="";
    cin>>a>>b;
    for(int i=0; i<a.length(); i++) {
        if (a[i] == b[i])
            c.append("0");
        else
            c.append("1");
    }
    cout << c << endl;
    return 0;
}
