#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// In a sorted array make array change like increase decreasing
// 2
// 6
// 1 2 3 4 5 6
// 11 
// 10 20 30 40 50 60 70 80 90 100 110

// Output:
// 6 1 5 2 4 3
// 110 10 100 20 90 30 80 40 70 50 60
int main()
 {
	//code
	ll test;
	cin>>test;
	ll n;
	while(--test>=0){
    	cin>>n;
    	ll a[n];
    	for(ll i=0; i<n; i++){
    	    cin>>a[i];
    	 }
         ll max_idx = n - 1, min_idx = 0; 
  
        // store maximum element of array 
        ll max_elem = a[n - 1] + 1; 

         for(ll i=0;i<n;i++){
             if (i % 2 == 0) { 
                a[i] += (a[max_idx] % max_elem) * max_elem; 
                max_idx--; 
            } 
  
        // at odd index : we have to put minimum element 
            else { 
                a[i] += (a[min_idx] % max_elem) * max_elem; 
                min_idx++; 
            } 
            
         }
         for (ll i = 0; i < n; i++) 
             a[i] = a[i] / max_elem;

         for(ll i=0; i<n; i++){
    	    cout<<a[i]<<" ";
    	 }
         cout<<"\n";
	}
    
	return 0;
}