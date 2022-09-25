#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    bool ibG = false;
    vector<int> numbers;
    int n;
    int p;
    int q;
    int aux;
    cin>>n>>p;
    for(int i=0; i<p; i++) {
        cin>>aux;
        if(find(numbers.begin(), numbers.end(), aux) == numbers.end())
            numbers.push_back(aux);
    }
    cin>>q;
    for(int i=0; i<q; i++) {
        cin>>aux;
        if(find(numbers.begin(), numbers.end(), aux) == numbers.end())
            numbers.push_back(aux);
    }
    if (p != 0 || q != 0) {
        sort(numbers.begin(), numbers.end());
        if (n == numbers.size())
            ibG = true;
    }
    ibG ? cout << "I become the guy." << endl : cout << "Oh, my keyboard!" << endl;
    return 0;
}
