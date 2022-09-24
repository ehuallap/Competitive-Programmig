#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    vector<pair<int, bool>>numbers;
    int n;
    int number;
    int nOdd = 0, nEven = 0;
    cin>>n;
    pair<int, bool> temp;
    while(n--) {
        cin>>number;
        temp.first = number;
        temp.second = number%2 == 0;
        numbers.push_back(temp);
    }
    for(auto &a: numbers) {
        if (a.second == 0)
            nOdd++;
        else
            nEven++;
    }
    if (nEven > nOdd) {
        for(int i=0; i<numbers.size(); i++) {
            if (numbers[i].second == 0) {
                cout << i+1 << endl;
                break;
            }
        }
    } else {
        for(int i=0; i<numbers.size(); i++) {
            if (numbers[i].second == 1) {
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}
