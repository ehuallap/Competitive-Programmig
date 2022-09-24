#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    bool easyEno = true;
    cin>>n;
    while (n--) {
        cin>>i;
        if (i == 1)
            easyEno = false;
    }
    easyEno == true ? cout << "EASY" << endl: cout << "HARD" << endl;
    return 0;
}
