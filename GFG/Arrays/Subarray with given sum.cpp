#include<iostream>
using namespace std;
// Subarray with given sum
int main()
 {
	//code
	int test;
	cin>>test;
	while(--test>=0){
	int n, key;
	cin>>n>>key;
	int a[n];
	for(int i= 0; i<n; i++){
	    cin>>a[i];
	}
	int start = 0;
	int cs = a[0];
    for(int i=1; i<=n;i++){
            // int j =0;
            while(cs>key and start<i-1){
                cs = cs - a[start];
                start++;
                // cout<<j++<<" ";
            }
            cout<<start+1<<" "<<i<<" "<<cs<<"\n";
            if(cs == key){
                cout<<start+1<<" "<<i<<"\n";
                break;
            }
            if(i<n){
            cs = cs+a[i];
            }
            if(i==n and cs!=key){
                cout<<-1<<"\n";
            }
        
      }	
    }
	return 0;
}

// Given an unsorted array A of size N of non-negative integers,
//  find a continuous sub-array which adds to a given number S
// Input:
// 2
// 5 12
// 1 2 3 7 5
// 10 15
// 1 2 3 4 5 6 7 8 9 10
// Output:
// 2 4
// 1 5