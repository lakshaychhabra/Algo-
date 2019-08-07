#include<bits/stdc++.h>
using namespace std;
//  Triplet Sum in Array
int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int test;
	cin>>test;
	int n;
	while(--test>=0){
	    int sum;
    	cin>>n>>sum;
    	int a[n];
    	for(int i=0; i<n; i++){
    	    cin>>a[i];
    	 }
    	sort(a,a+n);
    	int flag = 0;
    	for(int i=0;i<n;i++){
    	    int l = i+1;
    	    int r = n-1;
    	    while(l<r){
    	        if(a[i] + a[l] + a[r] == sum){
    	            flag = 1;
    	           // 
    	            break;
    	        }
    	        else if(a[i] + a[l] + a[r] < sum){
    	            l++;
    	        }
    	        else{
    	            r--;
    	        }
    	    }
    	}
    	if(flag){
    	    cout<<1<<endl;
    	}else{
    	    cout<<0<<endl;
    	}
	}
	return 0;
}