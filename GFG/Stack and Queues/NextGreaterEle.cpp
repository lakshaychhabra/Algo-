#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// Next Greater Element : Stacks
// I/P 
// 1
// 4
// 7 8 1 4

// O/P : 8 -1 4 -1
int main()
 {
	//code
	map<ll,ll> m;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll test;
	cin>>test;
	ll n;
	while(--test>=0){
    	cin>>n;
    	ll a[n];
    	for(ll i=0; i<n; i++){
    	    cin>>a[i];
    	 }
    	 stack<ll> s;
    	 s.push(a[0]);
    	 for(ll i =1;i<n;i++){
    	     if(s.empty()){
    	         s.push(a[i]);
    	         continue;
    	     }
    	     while(s.empty() == false && s.top()<a[i] ){
    	       //  cout<<a[i]<<" ";
    	       m[s.top()] = a[i];
    	         s.pop();
    	     }
    	     
    	     s.push(a[i]);
    	 }
    	 
    	 while(!s.empty()){
    	   //  cout<<"-1"<<" ";
    	     m[s.top()] = -1;
    	     s.pop();
    	 }
         for(ll i = 0 ; i<n; i++){
    	     cout<<m[a[i]]<<" ";
    	 }
    	 cout<<endl;
	}
	return 0;
}