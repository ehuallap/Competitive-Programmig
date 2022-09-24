#include <cmath>
#include <climits>
#include <queue>
#include <vector>
#include <map>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stack>
#include <algorithm>
#include <cstring>

#define max(a,b) (a<b?b:a)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(x) (x)*(x)
#define loop(i,v,n) for(int i=v;i<n;i++)
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

void solution() {
    short int cases;
    int n_prices;
    int price;
    cin >> cases;
    vi prices;
    while(cases--) {
        prices.clear();
        cin >> n_prices;
        if (n_prices <= 2) {
            if (n_prices == 2) {
                cin >> price;
                prices.push_back(price);
                cin >> price;
                prices.push_back(price);
                if (prices[0] < prices[1])
                    cout << prices[1] - prices[0] << endl;
                else
                    cout << 0 << endl;
            } else
                cout << 0 << endl;
        } else {
            for(int i=0; i<n_prices; i++) {
                cin >> price;
                prices.push_back(price);
            }
            int bough = 0;
            ll balance = 0;
            for(int i=0; i<prices.size(); i++) {
                if (i == prices.size()-1) {
                    if (((prices[i]*bough) + balance) > 0)
                        cout << ((prices[i]*bough) + balance) << endl;
                    else
                        cout << 0 << endl;
                }
                if (prices[i] < prices[i+1]) {
                    bough += 1;
                    balance -= prices[i];
                } else {
                    if (i != 0) {
                        balance += (prices[i]*bough);
                        bough = 0;
                    }
                }
                cout << "i: " << i << " con balance " << balance << endl;
            }
        }
    }
}

int main() {
    solution();
    return 0;
}
