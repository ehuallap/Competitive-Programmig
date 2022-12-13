#include "bits/stdc++.h"

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(x) (x) * (x)
#define loop(i, v, n) for (int i = v; i < n; i++)
#define LSOne(i) (i & -(i))

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<bool> vb;
typedef vector<ll> vll;

const int MAX_N = 1000010;

string T;
int n; // n = |T|

int PreSufTable[MAX_N];

void KMPgetPreSufTable()
{
  int i = 0, j = -1;
  PreSufTable[0] = -1;
  while (i < n)
  {
    while ((j >= 0) && (T[i] != T[j]))
      j = PreSufTable[j];
    ++i;
    ++j;
    PreSufTable[i] = j;
  }
}

void solution()
{
  int prev;
  bool answer;
  n = T.size();
  KMPgetPreSufTable();
  int power = n-PreSufTable[n];
  cout << n/power << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  while (cin >> T)
  {
    if (T == ".")
      break;
    solution();
  }
  return 0;
}