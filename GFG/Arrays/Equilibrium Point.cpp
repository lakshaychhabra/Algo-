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
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += a[i];
        }        
        int c = 0, l = 0;
        for(int i = 0; i<n;i++){
            sum = sum-a[i];
            
            if(sum == l){
                cout<<i+1<<"\n";
                c = 1;
                break;
            }
            else{
                l += a[i];
            }

        }
        if(c==0){
            cout<<-1<<"\n";
            // break;
        }
    }
	return 0;
}