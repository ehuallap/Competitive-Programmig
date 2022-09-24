#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, p;
    cin>>n;
    vector <int> num;
    vector <int>::iterator it;
    for(int i=0; i<n; i++) {
        cin>>p;
        num.push_back(p);
    }

    for(int i=0; i<n; i++) {
        it = std::find(num.begin(), num.end(), i+1);
        cout << it-num.begin() +1;
        if (i<n-1)
            cout << " ";
    }
    return 0;
}
