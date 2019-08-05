#include<bits/stdc++.h>
using namespace std;
// Count Triplets
// Input:
// 2
// 4
// 1 5 3 2
// 3
// 3 2 7
// Output:
// 2
// -1
int main()
 {
	//code
	int test;
	cin>>test;
	int n;
	while(--test>=0){
	cin>>n;
	int count = 0;
	int arr[n];
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	 }
	 sort(arr , arr+n);
        for(int i =n-1;i>=0;i--){
            int l = 0;
            int r = i-1;
            while(l<r){
                if(arr[l]+arr[r]==arr[i]){
                    count++;
                    l++;
                }
                else if(arr[l]+arr[r]>arr[i]){
                    r--;
                    
                }
                    else
                        l++;
                    
                }
                
            }
        if(count == 0){
            cout<<-1<<endl;
            // break;
        }
        else{
            cout<<count<<endl;
        }
	}
	return 0;
}