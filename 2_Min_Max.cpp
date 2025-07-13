void miniMaxSum(vector<int> arr) {
    int array_size=arr.size(),i=0;
    long long int sumMax=0, sumMin=0,temp=0;
    /*
    for(int i=0;i<array_size;i++)
    {
        for(int j=i+1;j<array_size-i;j++)
        {
            if(arr[i] > arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    */
    sort(arr.begin(),arr.end());
    for(int i=0;i<4;i++)
    {
        sumMin+=arr[i];
    }
    
    for(int i=4;i>0;i--)
    {
         sumMax+=arr[i];   
    }
    
    cout<<sumMin<<" "<<sumMax<<endl;

}
