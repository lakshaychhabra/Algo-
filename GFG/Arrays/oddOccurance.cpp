#include<bits/stdc++.h>
using namespace std;
// Odd Ocuurance of element
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
    	 int res = 0;
    	 for(int i = 0; i<n; i++){
    	     res = res^a[i];
    	 }
    	 cout<<res<<"\n";
	}
	return 0;
}