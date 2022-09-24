#include <iostream>
#include <regex>
#define ll long long
using namespace std;

int main()
{

    int n;
    bool found = false;
    ll product = 1;
    ll result = 1;
    cin>>n;
    const regex expReg("([4,7]*)");
    if (n%4 == 0 || n%7 == 0)
        cout << "YES" << endl;
    else {
        string num(to_string(n));
        if (regex_match(num, expReg)) {
            cout << "YES" << endl;
            found = true;
        }else{
            for(int i=47; i<(n); i++) {
                string temp(to_string(i));
                if (regex_match(temp, expReg)) {
                    if (n % i == 0) {
                        cout << "YES" << endl;
                        found = true;
                        break;
                    }
                }
            }
        }
        if (!found) cout << "NO" << endl;
    }
    return 0;
}
