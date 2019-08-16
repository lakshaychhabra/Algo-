#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 5;
    int a[n] = {5, 9, 21, 17, 13};

    vector<int> v (a,a+n);
    sort(a,a+n);
    int c = 0;
    for(int i=0;i<n;i++){
        if(a[i] != v[i]){
            c++;
        }
    }
    int c2 = 0;
    reverse(a,a+n);
     for(int i=0;i<n;i++){
        if(a[i] != v[i]){
            c2++;
        }
    }
    cout<<min(c,c2);
}

