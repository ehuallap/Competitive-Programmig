#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll cases;
    ll len;
    ll aux;
    ll lowest;
    ll answer = 0;
    vector<ll>a;
    vector<ll>b;

    cin>>cases;
    //while(cases--) {
    for(ll z=0; z<cases; z++) {
        answer = 0;
        lowest = 0;
        a={};
        b={};
        cin>>len;
        for(int i=0; i<len*2; i++) {
            cin>>aux;
            i<len ? a.push_back(aux) : b.push_back(aux);
        }
        ll index_a = 0;
        ll index_b = 0;
        ll aux2 = 1;
        for(; index_a<a.size();index_a++) {
            if (index_a == a.size() -1 && a[index_a] > b[0]) {
                index_a = 0;
                b[0] = b[aux2];
                aux2++;
                answer++;
            }
            if (a[index_a]<b[0]) {
                break;
            }
        }
        for(; index_b<b.size();index_b++) {
            if (b[index_b]>a[0]) {
                break;
            }
        }
        /*
        if (cases == 10000) {
            if (z > 543) {
                for(ll pos: a)
                    cout << pos << " ";
                cout << endl;
                for(ll pos: b)
                    cout << pos << " ";
                cout << endl;
            }
        }*/
        if (a[0] > b[0]) {
            if (index_a < index_b)
                cout << answer + distance(a.begin(), find(a.begin(), a.end(), a[index_a])) << endl;
            else
                cout << answer + distance(b.begin(), find(b.begin(), b.end(), b[index_b])) << endl;
        } else
            cout << answer << endl;
    }
    return 0;
}
