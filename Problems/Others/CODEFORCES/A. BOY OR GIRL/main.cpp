#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    char aux;
    int cont;
    cin>>s;
    vector<char>differents;
    for(int i=0;i<s.length();i++){
        cont=0;
        aux=s[i];
        for(int j=0;j<differents.size();j++){
            if(aux==differents[j]){
                cont+=1;
                break;
            }
        }
        if(cont==0)
            differents.push_back(aux);
    }
    if(differents.size()%2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}
