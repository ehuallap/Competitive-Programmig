#include <iostream>

using namespace std;

int main()
{
    int n;
    int p, q;
    int free = 0;
    cin>>n;
    while (n--) {
        cin>>p>>q;
        if (p<q && q-p >= 2)
            free++;
    }
    cout << free << endl;
    return 0;
}
