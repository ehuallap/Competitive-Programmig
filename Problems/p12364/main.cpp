#include <iostream>
#include <vector>
#include <string>

#define ONE "*....."
#define TWO "*.*..."
#define THREE "**...."
#define FOUR "**.*.."
#define FIVE "*..*.."
#define SIX "***..."
#define SEVEN "****.."
#define EIGHT "*.**.."
#define NINE ".**..."
#define ZERO ".***.."
#define ROWS_BRAILLE 3
using namespace std;

void solution() {
    char type;
    cin >> type;
    switch (type) {
        case 'S': {
            string number;
            vector<string> result;
            cin >> number;
            for (int i = 0; i < number.length(); i++) {
                switch (number[i]) {
                    case '1': result.push_back(ONE); break;
                    case '2': result.push_back(TWO); break;
                    case '3': result.push_back(THREE); break;
                    case '4': result.push_back(FOUR); break;
                    case '5': result.push_back(FIVE); break;
                    case '6': result.push_back(SIX); break;
                    case '7': result.push_back(SEVEN); break;
                    case '8': result.push_back(EIGHT); break;
                    case '9': result.push_back(NINE); break;
                    case '0': result.push_back(ZERO); break;
                }
            }
            for(int i=0; i<ROWS_BRAILLE; i+=2) {
                for(int j=0; j<result.size(); j++) {
                    cout << result[j].substr(i, 2);
                    if(j != result.size()-1) cout << " ";
                }
                cout << endl;
            }
            for(int i=0; i<result.size(); i++) {
                cout << "..";
                if(i != result.size()-1) cout << ' ';
            }
            cout << endl;
            break;
        }
        case 'B': {
            string simbol1, simbol2, simbol3;
            cin.ignore();
            getline(cin, simbol1);
            getline(cin, simbol2);
            getline(cin, simbol3);
            for (int i = 0; i < simbol1.length(); i += 3) {
                string simbol = simbol1.substr(i, 2) + simbol2.substr(i, 2) + simbol3.substr(i, 2);
                if (simbol == ONE)
                    cout << 1;
                else if (simbol == TWO)
                    cout << 2;
                else if (simbol == THREE)
                    cout << 3;
                else if (simbol == FOUR)
                    cout << 4;
                else if (simbol == FIVE)
                    cout << 5;
                else if (simbol == SIX)
                    cout << 6;
                else if (simbol == SEVEN)
                    cout << 7;
                else if (simbol == EIGHT)
                    cout << 8;
                else if (simbol == NINE)
                    cout << 9;
                else if (simbol == ZERO)
                    cout << 0;
            }
            cout << endl;
            break;
        }
        default:
            break;
    }
}

int main() {
    int numberDigits; cin >> numberDigits;
    while(numberDigits != 0) {
        solution();
        cin >> numberDigits;
    }
    return 0;
}