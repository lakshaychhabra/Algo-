#include <iostream>
using namespace std;
bool isVowel(char c){
    
    return (c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u');
}
void removeVowel(string str){
    cout<<str[0];
    for(int i = 1; str[i]; i++){
        if(!isVowel(str[i-1]) || !isVowel(str[i])){
            cout<<str[i];
        }
    }
}
int main() {
    string c = "geeks for geeks";
    removeVowel(c);
}
