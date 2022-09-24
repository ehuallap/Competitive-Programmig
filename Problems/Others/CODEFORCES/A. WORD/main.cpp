#include <iostream>
using namespace std;

int main()
{
    unsigned int upper=0;
    string s;
    cin>>s;
    for(char i : s){
        if(i>='A' && i<='Z')
            upper+=1;
    }
    if(upper > s.length()/2){
        for(int i=0; i<s.length(); i++){
            s[i] = toupper(s[i]);
        }
    }else{
        for(int i=0; i<s.length(); i++){
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}
