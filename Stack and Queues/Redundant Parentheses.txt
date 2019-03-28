#include <iostream>
#include <stack>
#include<string>
using namespace std;
void rebduntantParenthesis(string str){
    stack<char> s;
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        if(ch!=')'){
            s.push(ch);
        }
         if(ch==')'){
             if(s.empty())
                break;
            if(s.top()=='('){
                cout<<"Duplicate";
                return;
            }
            else{
                while(s.top()!='('){
                    s.pop();
                }
                s.pop();
            }
         }
    }
    cout<<"Not Duplicates";

}
int main() {
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    rebduntantParenthesis(s);
    cout<<"\n";
    }
}
