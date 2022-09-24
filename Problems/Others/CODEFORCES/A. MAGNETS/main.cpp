#include <iostream>
using namespace std;

int main()
{
    int n, groups = 1;
    string i;
    char last = ' ';
    cin>>n;
    while(n--) {
        cin>>i;
        if (last == ' ') {
            last = i[1];
        } else {
            if (i[0] == last)
                groups+=1;
            last = i[1];
        }
    }
    cout << groups << endl;
    return 0;
}
