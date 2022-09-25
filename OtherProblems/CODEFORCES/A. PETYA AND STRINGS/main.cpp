#include <iostream>
using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    for(int i=0;i<a.length();i++){
        if(a[i]>='A' && a[i]<='Z')
            a[i] = tolower(a[i]);
        if(b[i]>='A' && b[i]<='Z')
            b[i] = tolower(b[i]);
    }
    if(a == b)
        cout << 0 << endl;
    else if (a > b)
        cout << 1 << endl;
    else
        cout << -1 << endl;
    return 0;
}
