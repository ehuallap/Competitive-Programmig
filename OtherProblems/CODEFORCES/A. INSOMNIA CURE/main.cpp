#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    vector<bool>posiciones(1000000, 0);
    bool done = false;
    int pos1;
    int pos2;
    int pos3;
    int pos4;
    ll total;
    ll answer = 0;

    cin>>pos1>>pos2>>pos3>>pos4;

    if (pos1 == 1 || pos2 == 1 || pos3 == 1 || pos4 == 1)
        done = true;
    cin>>total;

    if (!done) {
        for(int i=0; i<total; i++) {
            if ((i+1)%pos1 == 0 && posiciones[i] == 0) {
                answer++;
                posiciones[i] = 1;
            }
            else if ((i+1)%pos2 == 0 && posiciones[i] == 0) {
                answer++;
                posiciones[i] = 1;
            }
            else if ((i+1)%pos3 == 0 && posiciones[i] == 0) {
                answer++;
                posiciones[i] = 1;
            }
            else if ((i+1)%pos4 == 0 && posiciones[i] == 0) {
                answer++;
                posiciones[i] = 1;
            }
        }
        cout << answer << endl;
    } else
        cout << total << endl;
    return 0;
}
