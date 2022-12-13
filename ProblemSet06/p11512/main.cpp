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
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<bool> vb;
typedef vector<ll> vll;

#define MAX_N 100010
char T[MAX_N];
int n;
int RA[MAX_N], tempRA[MAX_N];   // rank array and temporary rank array
int SA[MAX_N], tempSA[MAX_N];   // suffix array and temporary suffix array
int c[MAX_N];                   // for counting/radix sort

int Phi[MAX_N];
int PLCP[MAX_N];
int LCP[MAX_N];

bool cmp(int a, int b) { return strcmp(T + a, T + b) < 0; }

void countingSort(int k) {
    int i, sum, maxi = max(300, n);
    memset(c, 0, sizeof c);
    for (i = 0; i < n; i++)
        c[i + k < n ? RA[i + k] : 0]++;
    for (i = sum = 0; i < maxi; i++)
    {
        int t = c[i];
        c[i] = sum;
        sum += t;
    }
    for (i = 0; i < n; i++)
        tempSA[c[SA[i] + k < n ? RA[SA[i] + k] : 0]++] = SA[i];
    for (i = 0; i < n; i++)
        SA[i] = tempSA[i];
}

void constructSA() {
    int i, k, r;
    for (i = 0; i < n; i++)
        RA[i] = T[i];
    for (i = 0; i < n; i++)
        SA[i] = i;
    for (k = 1; k < n; k <<= 1) {
        countingSort(k);
        countingSort(0);
        tempRA[SA[0]] = r = 0;
        for (i = 1; i < n; i++)
            tempRA[SA[i]] =
                (RA[SA[i]] == RA[SA[i - 1]] && RA[SA[i] + k] == RA[SA[i - 1] + k]) ? r : ++r;
        for (i = 0; i < n; i++)
            RA[i] = tempRA[i];
        if (RA[SA[n - 1]] == n - 1)
            break;
    }
}

void computeLCP()
{
    int i, L;
    Phi[SA[0]] = -1;
    for (i = 1; i < n; i++)
        Phi[SA[i]] = SA[i - 1];
    for (i = L = 0; i < n; i++) {
        if (Phi[i] == -1)
        {
            PLCP[i] = 0;
            continue;
        }
        while (T[i + L] == T[Phi[i] + L])
            L++;
        PLCP[i] = L;
        L = max(L - 1, 0);
    }
    for (i = 0; i < n; i++)
        LCP[i] = PLCP[SA[i]];
}

pair<int, pair<int, int>> LRS() {
    int i, idx = 1, maxLCP = -1, j = 0, flag = 0;
    for (i = 1; i < n; i++)
        if (LCP[i] > maxLCP)
        {
            maxLCP = LCP[i], idx = 2;
            j = i;
            flag = 1;
        }
        else if (LCP[i] == maxLCP && flag == 1)
            idx++;
        else
            flag = 0;
    return make_pair(maxLCP, make_pair(j, idx));
}
void solution() {
  int cases; scanf("%d",&cases);
  while(cases--)
  {
      memset(T, '\0', sizeof(T));
      scanf("%s",T);
      n = (int)strlen(T);
      T[n++] = '$';
      constructSA();
      computeLCP();
      pair<int,pair<int,int>> ans = LRS();
      pair<int,int> res = ans.second;
      string a =  T + SA[res.first];
      a = a.substr(0,ans.first);
      if(ans.first ==0) printf("No repetitions found!\n");
      else printf("%s %d\n", a.c_str(), res.second);
  }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}