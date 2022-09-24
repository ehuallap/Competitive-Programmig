#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    int a;
    cin>>n;
    vector<int> numbers;
    while(n--) {
        cin>>a;
        numbers.push_back(a);
    }
    sort(numbers.begin(), numbers.end());
    for(int i=0; i<numbers.size(); i++)
        cout << numbers[i] << " ";
    cout << endl;
    return 0;
}
