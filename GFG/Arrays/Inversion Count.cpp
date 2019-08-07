#include<bits/stdc++.h>
using namespace std;
int t,n;
// // Inversion Count : For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum. 
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
long merge(int arr[], int left[],int right[],int n1,int n2 ) 
{
    int i = 0, j = 0, count = 0;
    while (i < n1 || j < n2) {
        if (i == n1) {
            arr[i+j] = right[j];
            j++;
        } else if (j == n2) {
            arr[i+j] = left[i];
            i++;
        } else if (left[i] <= right[j]) {
            arr[i+j] = left[i];
            i++;                
        } else {
            arr[i+j] = right[j];
            count += n1-i;
            j++;
        }
    }
    return count;
}

long  incount(int arr[],int n)
{
    if(n<2){
        return 0;
    }
    int mid=(n)/2;
    int left[mid];
    int right[n-mid];
    for(int i=0;i<mid;i++){
            left[i]=arr[i];
        }
    for(int i=mid;i<n;i++){
            right[i-mid]=arr[i];
        }
    
  return incount(left,mid)+incount(right,n-mid)+merge(arr,left,right,mid,n-mid);
    
}

int main()
{
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<incount(arr,n)<<endl;
    }
}