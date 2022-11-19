#include "bits/stdc++.h"

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(x) (x)*(x)
#define loop(i,v,n) for(int i=v;i<n;i++)
#define LSOne(i) (i&-(i))

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<bool> vb;
typedef vector<ll> vll;

void solution() {
    bool positive_1, positive_2, arithmetic;
    string n;
    vi num;
    while(getline(cin, n)) {
        arithmetic = false;
        num.clear();
        if (n == "0") break;
        size_t pos = n.find(":");
        int l = atoi((n.substr(0, pos)).c_str());
        n.erase(0, (int)pos+2);
        string buffer;
        stringstream input_stream(n);
        while(getline(input_stream, buffer, ' '))
            num.PB(atoi(buffer.c_str()));
        for(int i=0; i<num.size()-1; i++) {
            positive_1 = (num[i+1]-num[i] > 0);
            if (i == 1) {
                positive_2 = positive_1;
                continue;
            }
            if (positive_1 && positive_2) {
                arithmetic = true;
                break;
            }
            positive_2 = positive_1;
        }
        cout << (arithmetic ? "no" : "yes") << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}
