#include<bits/stdc++.h>

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

ll digits(ll n) {
    ll result = 0;
    while(n) {
        n/=10;
        result+=1;
    }
    return result;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b;
    ll result;
    cin>>a;
    while(a--) {
        cin>>b;

        if (digits(b) == 1) {
            cout << b - 1 << endl;
        } else if (digits(b) == 2) {
            cout << (b-10)*2 << endl;
        } else if (digits(b) == 3) {
            result = 0;
            result += b%10;
            int aux = 10 + (b%10);
            result += 9 - (aux - 9) + 1;
            ((b/100)%10)>1 ? result*= ((b/100)%10)-1 : result*= 1;
            cout << result << endl;
        } else {
            result = 0;
            while(digits(b)>2) {
                int aux = 10 + (b%10);
                result += 9 - (aux - 9) + 1;
                ((b/100)%10)>1 ? result*= ((b/100)%10)-1 : result*= 1;
                b /= 10;
            }
            cout << result << endl;
        }
    }
    return 0;
}
