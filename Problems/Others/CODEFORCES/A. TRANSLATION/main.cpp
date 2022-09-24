#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    int resp = 0;
    getline(cin, s);
    getline(cin, t);
    for (int i = 0; i<s.length(); i++) {
        s[i] == t[t.length()-1-i] ? resp++ : resp--;
    }
    resp == s.length()? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}
