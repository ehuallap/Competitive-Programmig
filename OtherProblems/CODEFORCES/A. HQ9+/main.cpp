#include <iostream>
using namespace std;

int main()
{
    string s;
    bool found = false;
    getline(cin, s);
    for(auto a: s) {
        if (a == 'H' || a == 'Q' || a == '9') {
            cout << "YES" << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "NO" << endl;
    return 0;
}
