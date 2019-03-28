#include <iostream>
#include<stack>
using namespace std;
void reverse(stack<int> s){
    if(s.empty()){
        return;
    }
    int val = s.top();
    s.pop();
    reverse(s);
    cout<<val<<" ";
}
int main() {
    int n;
    cin>>n;
    int k;
    stack<int> s;
    for(int i=0;i<n;i++){
        cin>>k;
        s.push(k);
    }
    reverse(s);
}
