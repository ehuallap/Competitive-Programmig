#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cin>>word;

    for(int i=0; i < word.length() ;i+=1){
        if(word[i] == 'A' || word[i] == 'a' || word[i] == 'E' || word[i] == 'e' || word[i] == 'I' || word[i] == 'i' || word[i] == 'O' || word[i] == 'o' || word[i] == 'U' || word[i] == 'u' || word[i] == 'y' || word[i] == 'Y'){
            word.erase(i,1);
            i-=1;
        }else if (word[i] >= 'B' && word[i] <= 'Z'){
            word[i] = tolower(word[i]);
            word.insert(i,".");
            i+=1;
        }else{
            word.insert(i,".");
            i+=1;
        }
    }

    cout << word << endl;
    return 0;
}

