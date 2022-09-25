#include <iostream>
#include <cstdlib>
#include <vector>
#define ll long long

using namespace std;

int main()
{
    ll y = 0;
    ll x = 0;
    ll case_tests;
    ll aux;
    string card;
    vector<string> top_25;
    vector<string> other;

    cin>>case_tests;
    aux = case_tests;
    while(case_tests--) {
        y = 0;
        x = 0;
        top_25 = {};
        other = {};
        for(int i=0; i<52; i++) {
            cin>>card;
            if (i<27)
                other.push_back(card);
            else
                top_25.push_back(card);
        }
        int i = 3;
        while(i--) {
            if (other.back()[0] != 'A' && other.back()[0] != 'K' && other.back()[0] != 'Q' && other.back()[0] != 'J' && other.back()[0] != 'T') {
                x = other.back()[0] - '0';
            } else
                x = 10;
            y += x;
            other.erase(other.end());
            for(int i=0; i<(10-x); i++)
                other.erase(other.end());
        }
        for(string i: top_25) {
            other.push_back(i);
        }
        cout << "Case " << abs(case_tests - aux) << ": ";
        cout << other[y-1] << endl;
    }
    return 0;
}
