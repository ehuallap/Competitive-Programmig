#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll a, b, c, d;
    vector<ll> numbers;
    int count = 0;
    cin>>a>>b>>c>>d;
    numbers.push_back(a);
    numbers.push_back(b);
    numbers.push_back(c);
    numbers.push_back(d);
    sort(numbers.begin(), numbers.end());
    for(int i=0; i<3; i++) {
        if(numbers[i] == numbers[i+1])
            count++;
    }
    cout << count << endl;
    return 0;
}
