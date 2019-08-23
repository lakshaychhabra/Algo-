#include<bits/stdc++.h>
using namespace std;
char hashTable[][10] = { " "," ", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void printWords(int *a, int n, char *out, int i, int j){
    // Base Case
    if(i>=n){
        out[j] = '\0';
        cout<<out<<",";
        return;
    }
    // Recursive Case
    int digit = a[i];
    if(digit == 0 || digit == 1){
        printWords(a,n,out,i+1,j);
    }
    for(int k = 0; hashTable[digit][k] != '\0'; k++){
        out[j] = hashTable[digit][k];
        printWords(a,n,out,i+1,j+1);
    }
}

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
         char out[100];
    	 printWords(a, n, out, 0, 0);
    	 cout<<endl;
	}
	return 0;
}