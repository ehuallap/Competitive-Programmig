#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if(s.length()>=5){
        size_t h = s.find("h");
        size_t e = s.find("e", h+1);
        size_t l = s.find("l", e+1);
        size_t l_2 = s.find("l", l+1);
        size_t o = s.find("o", l_2+1);
        if((h!= string::npos) && (e!= string::npos) && (l!= string::npos) && (l_2!= string::npos) && (o!=string::npos)){
            cout << "YES" << endl;
        }else
            cout << "NO" << endl;
    }else
        cout << "NO" <<endl;
    return 0;
}
