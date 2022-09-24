#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    char s[60], aux;
    scanf("%d %d %s", &n, &t, &s);
    while(t--) {
        for(int i=0; i<n; i++){
            if(s[i] == 'B' && s[i+1] == 'G') {
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    }
    printf("%s", s);
    return 0;
}
