#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int test;
	cin>>test;
	int n;
	while(--test>=0){
    	cin>>n;
    	int a[n];
    	for(int i=0; i<n; i++){
    	    cin>>a[i];
    	 }
    	 for(int i=0;i<n;i+=2){
    	     if(i>0 and a[i-1]>a[i]){
    	         swap(a[i], a[i-1]);
    	     }
    	     if(i<n-1 and a[i]<a[i+1]){
    	         swap(a[i+1], a[i]);
    	     }
    	 }
    	 for(int i=0;i<n;i++){
    	     cout<<a[i]<<" ";
    	 }
    	 cout<<endl;
	}
	return 0;
}