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

const int MAX_N = 85;

string T, SP;
int n, m; // n = |T|, m = |P|

int PreSufTable[MAX_N];

void KMPgetPreSufTable() {
  int i = 0, j = -1; PreSufTable[0] = -1;
  while (i < m) {
    while ((j >= 0) && (SP[i] != SP[j])) j = PreSufTable[j];
    ++i; ++j;
    PreSufTable[i] = j;
  }
}

int KMPSearch(int &prev, int size, bool &answer) {
  int freq = 0;
  int i = 0, j = 0;
  while (i < n) {
    while ((j >= 0) && (T[i] != SP[j])) j = PreSufTable[j];
    ++i; ++j;
    if (j == m) {
      ++freq;
      if (abs((i-j)-prev) != size) {
        answer = false;
        return freq;
      } else
        prev = (i-j);
        //P is found at index i-j
      j = PreSufTable[j];
    }
  }
  return freq;
}
void solution() {
  int prev;
  bool answer;
  SP = T;
  n = T.size();
  m = SP.size();
  KMPgetPreSufTable();
  loop(size, 1, T.size()+1) {
    answer = true;
    prev = 0-size;
    m = size;
    int freq = KMPSearch(prev,size,answer);
    if (freq*size == n && answer) {
      //cout << T << " " << SP << endl;
      //cout << T.size() << " " << SP.size() << endl;
      cout << size << endl;
      return;
    }
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int numCases; cin >> numCases;
  while(numCases--) {
    cin >> T;
    solution();
    if (numCases > 0)
      cout << endl;
  }
  return 0;
}