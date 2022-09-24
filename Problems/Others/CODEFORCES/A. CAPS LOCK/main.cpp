#include <iostream>
#include <algorithm>
using namespace std;
void case_true(string &n) {
    transform(n.begin()+1, n.end(), n.begin()+1, [](unsigned char c){ return tolower(c); });
}
int main()
{
    string n;
    int uppers = 0;
    bool required = true;
    cin>>n;
    if(n[0] >= 'A' && n[0]<= 'Z') uppers++;
    for(int i=1; i<n.length(); i++) {
        if (n[i] >= 'a' && n[i]<= 'z') {
            required = false;
            break;
        } else {
            if (n[i] >= 'A' && n[i]<= 'Z')
                uppers++;
        }
    }
    if(required)
        case_true(n);
    if (n[0] >= 'a' && n[0]<= 'z' && required) n[0] = toupper(n[0]);
    if (uppers == n.length()) n[0] = tolower(n[0]);
    cout << n << endl;
    return 0;
}
