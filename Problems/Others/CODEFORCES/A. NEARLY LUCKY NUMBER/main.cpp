#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string a;
    int cont = 0;
    getline(cin, a);
    for (char each : a){
        if (each == '4' || each == '7')
            cont++;
    }
    cont == 4 || cont == 7 ? cout << "YES" : cout << "NO" << endl;
}

/*
int main()
{
    ios::sync_with_stdio(false);
    string a;
    getline(cin, a);

    const regex expReg("([^4,7]*)(([4,7]{4})|([4,7]{7}))([^4,7]*)");

    if (regex_match(a, expReg))
        cout << "YES\n" << endl;
    else
        cout << "NO\n" << endl;
    return 0;
}*/
