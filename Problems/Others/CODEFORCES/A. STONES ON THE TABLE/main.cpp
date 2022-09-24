#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, cont=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=1;i<n;i++){
        if(n==1)
            break;
        if(s[i]==s[i-1]){
            s.erase(i,1);
            i-=1;
            cont+=1;
            n-=1;
        }

    }
    cout << cont << endl;
    return 0;
}
