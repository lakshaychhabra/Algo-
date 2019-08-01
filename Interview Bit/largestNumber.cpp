int mycompare(string X, string Y){

    string xy = X.append(Y);
    string yx = Y.append(X);
     
    return xy.compare(yx)>0?1:0;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> b;
    for(int i = 0; i<A.size(); i++){
        string k = to_string(A[i]);
        b.push_back(k);
    }
    sort(b.begin(),b.end(), mycompare);
    string s = "";
    string sec = "0";
        for(int i=0; i<b.size(); i++){
            s += b[i];
        }
    if(s[0] == '0'){
        return sec;
    }
    else{
    
    return s;
    }
}