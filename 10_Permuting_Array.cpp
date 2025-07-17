string twoArrays(int k, vector<int> A, vector<int> B) {
    
    sort(A.begin(),A.end()); //Increasing order 
    sort(B.begin(),B.end(),greater<int>()); //Decreasing order
    int count=0,sum=0;
    for(int i=0; i<A.size();i++)
    {
        sum=A[i]+B[i];
        if(sum>=k)
        {
            count++;
        }
        sum=0;
    }
    if(count==A.size()) //Condition should be true for every element
        return "YES";
    else 
        return "NO";
}
