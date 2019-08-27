#include <bits/stdc++.h>
// Count Distinct Permutation
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
// formula = len!/repeated!
int countDistinct(string s){
    int total = s.length();
    int freq[26] = {0};
    for(int i=0;s[i]!='\0'; i++){
        freq[s[i]-'a']++;
    }
    int fact = 1;
    // cout<<"here";
    // calculating Factorial of Repeating Characters
    for(int i = 0; i<26;i++){
        fact = fact*factorial(freq[i]);
    }
    // cout<<fact;
    return factorial(total)/fact;
}
int main() {
    string s = "ybghjhbuytb";
    cout<<countDistinct(s);
}
