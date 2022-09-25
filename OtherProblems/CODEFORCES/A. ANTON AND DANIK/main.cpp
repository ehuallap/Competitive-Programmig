#include <iostream>

using namespace std;

int main()
{
    string s;
    int n, ctrl=0;
    cin>>n>>s;
    for(char a : s){
        if (a == 'A')
            ctrl++;
        else
            ctrl--;
    }
    if (ctrl > 0)
        cout << "Anton" << endl;
    else if (ctrl < 0)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}
