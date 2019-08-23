#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int test;
	cin>>test;
// 	int n;
	while(test-->=0){
        string s;
        cin>>s;
        set<char> map;
        int i = 0, j = 0, max_length = 0;
    	while(j<s.size()){
    	    if(map.find(s[j]) == map.end()){
    	        map.insert(s[j]);
                j++;
    	        max_length = max(max_length, j - i);
    	        
    	    }
    	    else{
    	        map.erase(s[i]);
    	        i++;
    	    }
    	}
    	cout<<max_length<<endl;
	}
	return 0;
}