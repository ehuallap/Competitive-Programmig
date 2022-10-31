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
    int num_case = 1;
    int n, m;
    ll num, sum;
    vi numbers;
    ll diff;
    int index_l, index_h;
    int ans_l, ans_h;
    while(cin >> n) {
        if (n==0) break;
        numbers.clear();
        loop(i, 0, n) {
            cin >> num;
            numbers.PB(num);
        }
        sort(numbers.begin(), numbers.end());
        cin >> m;
        cout << "Case " << num_case++ << ":" << endl;
        loop(i, 0, m) {
            diff = LONG_LONG_MAX;
            cin >> num;
            index_l = 0;
            index_h = numbers.size()-1;
            ans_l = index_l;
            ans_h = index_h;        
            while(abs(index_h-index_l) > 1) {
                sum = numbers[index_l] + numbers[index_h];
                if (sum == num)
                    break;
                if (sum < num) {
                    index_l++;
                    if (abs(num-(numbers[index_l] + numbers[index_h])) < diff) {
                        ans_l = index_l;
                        ans_h = index_h;
                        diff = abs(num-(numbers[index_l] + numbers[index_h]));
                    }
                } else {
                    index_h--;
                    if (abs(num-(numbers[index_l] + numbers[index_h])) < diff) {
                        ans_l = index_l;
                        ans_h = index_h;
                        diff = abs(num-(numbers[index_l] + numbers[index_h]));
                    }
                }
            }
            sum = numbers[ans_l] + numbers[ans_h];
            if (n!=1) {
                cout << "Closest sum to " << num << " is " << sum << "." << endl;
            } else
                cout << "Closest sum to " << num << " is " << numbers[0] << "." << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}
