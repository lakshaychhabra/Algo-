#include<bits/stdc++.h>
using namespace std;
// KEY PAIR
// 2
// 6 16
// 1 4 45 6 10 8
// 5 10
// 1 2 4 3 6
// Output:
// Yes
// Yes
// 2 elements sum equals to given sum
int main()
 {
	//code
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
    	 unordered_set<int> m;
         int flag = 0;
         for(int i = 0; i<n;i++){
             int temp = sum - a[i];
             if(m.find(temp) != m.end()){
                 flag = 1;
                 break;
             }
             m.insert(a[i]);
         }
         if(flag){
             cout<<"Yes"<<endl;
         }
         else{
            cout<<"No"<<endl;
         }
	}
	return 0;
}