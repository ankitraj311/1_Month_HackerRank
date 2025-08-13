string balancedSums(vector<int> arr) {
    int n = (int)arr.size();
    
    for(int i=1;i<n;i++)
    {
    long long  LSum=0,RSum=0;
     for(int j=0;j<i;++j)
       {
              LSum=LSum+arr[j];
             // cout<<"LSum is "<<LSum<<" When arr[j] value is "<<arr[j]<<" J is "<<j<<endl;
          }
    
     for(int k=i+1;k<n;++k)
     {
         RSum=RSum+arr[k];
         // cout<<"RSum is "<<RSum<<" When arr[k] value is "<<arr[k]<<" k is "<<k<<endl;
     }
     
    if(LSum==RSum)
    {
        return "YES";
        break;
    } 
}
    return "NO";

}
