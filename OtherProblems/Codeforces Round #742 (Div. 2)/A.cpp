#include<bits/stdc++.h>

#define PB push_back

#define SQ(x) (x)*(x)
#define loop(i,v,n) for(int i=v;i<n;i++)

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    string s;
    string result = "";
    cin>>t;
    while(t--) {
        cin>>n>>s;
        for(int i=0; i<n; i++) {
            if(s[i] == 'U')
                result.append("D");
            else if (s[i] == 'D')
                result.append("U");
            else if(s[i] == 'L' && s[i+1] == 'R') {
                result.append("LR");
                i++;
            }
            else if (s[i] == 'R' && s[i+1] == 'L') {
                result.append("RL");
                i++;
            }
        }
        cout << result << endl;
        result = "";
    }
    return 0;
}
