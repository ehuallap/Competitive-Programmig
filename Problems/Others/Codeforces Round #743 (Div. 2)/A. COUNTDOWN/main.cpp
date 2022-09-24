#include <iostream>
#include <string>
#define ll long long
using namespace std;
void solve(string clock) {
    ll result = 0;
    result+=clock[clock.length()-1] - '0';
    for(int i=clock.length()-2; i>=0; i--) {
        if (clock[i] != '0') {
            result++;
            result += clock[i] - '0';
        }
    }
    cout << result << endl;
}
int main()
{
    int cases; cin>>cases;
    int nDigits;
    string nClock;
    while(cases--) {
        cin>>nDigits>>nClock;
        solve(nClock);
    }
    return 0;
}
