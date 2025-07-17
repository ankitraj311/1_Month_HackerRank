int birthday(vector<int> s, int d, int m) {
    int sum=0,count=0;
    for(int i=0;i<s.size();i++)
    {   sum=0; ///Without this , Program was causing issue. Because everytime whenever loop starts we have to make sum=0
        for( int j=0;j<m;j++)
        {
            sum+=s[i+j];
        }
        if(sum==d)
        {
            count++;
        }
    }
    return count;
}
