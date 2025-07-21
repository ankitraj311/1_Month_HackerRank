int sockMerchant(int n, vector<int> ar) {
    
    vector<int> array(101,0);
    int pair=0;
    
    for(int i=0;i<ar.size();i++)
    {
        array[ar[i]]++;
    }

    for(int j=0;j<array.size();j++)
    {
        if(array[j]%2==0)
        {
            pair+=array[j]/2;
        }
        
        if(array[j]%2==1)
        {
            pair+=(array[j]-1)/2;
        }
    }
    
    return pair;
  
}
