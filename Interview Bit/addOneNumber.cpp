// Add One To Number
// {0,1,2,3} -> 1 2 4
// or 
// {9,9,9} - > 1 0 0 0 

vector<int> Solution::plusOne(vector<int> &A) {

int i = A.size() - 1;

while(A[i]==9 && i>=0){
    A[i]=0;
    i--;
}
if(i==-1){
    A.insert(A.begin(),1);
}
else{
    A[i]++;
}

while(A[0]==0){
    A.erase(A.begin());
}

return A;
    
    
    
}