#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define F first
#define S second
#define pll pair<ll, ll>
#define vb vector<bool>
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define vvi vector<vi>

using namespace std;

ostream& operator<<(ostream& os, const vi& v) {
    for (int i = 0; i < v.size(); i++) {
        os << v[i];
        i != v.size() - 1 ? os << " " : os << endl;
    }
    return os;
}

int nextPosI(int numLogs, int numPos, int dir) {
    int newPos = numPos + dir;
    if (newPos < 0) return numLogs-1;
    return newPos % numLogs;
}

int main() {
    int numLogs, numIndians;
    //cin >> numLogs >> numIndians;
    //vi indians(numIndians);
    //vi dirs(numIndians);
    /*for (int i = 0; i < numIndians; i++)
        cin >> indians[i] >> dirs[i];
    */
    vi indians = {2, 3, 5, 6};
    vi dirs = {1, -1, -1, -1};

    numLogs = 6;
    numIndians = 4;
    int numIterations = 1;

    vi original = indians;
    cout << indians << endl;
    cout << dirs << endl;
    for(int k = 0; k<numIterations; k++) {
        for(int i=0; i<numIndians; i++) {
            int nextPos = nextPosI(numLogs, indians[i]-1, dirs[i]);
            if (abs(indians[i]-indians[nextPos]) == 1) {
                if (dirs[i] != dirs[nextPos]) {
                    dirs[i] *= -1;
                    dirs[nextPos] *= -1;
                    break;
                } else {
                    indians[i] = nextPos+1;
                    indians[nextPos] = nextPosI(numLogs, nextPos, dirs[nextPos])+1;
                }
                i += 1;
            } else {
                indians[i] = nextPos+1;
            }
        }
        cout << indians << endl;
        cout << dirs << endl;
    }
}