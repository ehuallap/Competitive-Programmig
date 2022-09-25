#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    int num[4];
    cin>>y;
    while(y < 9013) {
        y++;
        num[0] = y%10000 / 1000;
        num[1] = y%1000 / 100;
        num[2] = y%100 / 10;
        num[3] = y%10;
        if(num[0] != num[1] && num[1] != num[2] && num[2] != num[3] &&
           num[0] != num[3] && num[0] != num[2] && num[1] != num[3]){
            cout << y << endl;
            break;
        }
    }
    return 0;
}
