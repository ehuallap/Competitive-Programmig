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
    int times, result;
    int cache;
    string keyboard, word;
    cin >> times;
    while(times--) {
        result = 0;
        cin>>keyboard>>word;
        int i, j;
        for(i=0; i<keyboard.length(); i++) {
            if (keyboard[i] == word[0])
                break;
        }
        cache = i+1;
        for(i=1; i<word.length(); i++) {
            for(j=0; i<keyboard.length(); j++) {
                if (word[i] == keyboard[j]) {
                    result += abs((j+1)-cache);
                    break;
                }
            }
            cache = j+1;
        }
        cout << result << endl;
    }
}

int main() {
    solution();
    return 0;
}
