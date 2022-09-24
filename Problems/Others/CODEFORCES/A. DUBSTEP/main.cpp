#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin>>input;
    while(input.rfind("WUB") != string::npos) {
        input.replace(input.rfind("WUB"), 3, " ");
    }
    while(input[0] == ' ')
        input.erase(0, 1);
    for(int i=0; i<input.length(); i++) {
        if (input[i] == ' ' && input[i+1] == ' ') {
            input.erase(i, 1);
            i--;
        }
    }
    if (input[input.length()-1] != ' ')
        input += ' ';
    cout << input << endl;
    return 0;
}
