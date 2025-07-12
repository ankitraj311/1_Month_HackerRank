
//need to add header file for cout //#include <iomanip>
void plusMinus(vector<int> arr) {
    
    int countP=0,countN=0,countZ=0, array_size=arr.size();
    for(int i=0;i<array_size;i++)
    {
        if(arr[i]>0)
            countP++;
        if(arr[i]<0)
            countN++;
        if(arr[i]==0)
            countZ++;
    }
    cout<<fixed<<setprecision(6)<<(double)countP/array_size<<endl;
    cout<<fixed<<setprecision(6)<<(double)countN/array_size<<endl;
    cout<<fixed<<setprecision(6)<<(double)countZ/array_size<<endl;

    //printf("%0.06f\n",(float)countP/array_size);
    //printf("%0.06f\n",(float)countN/array_size);
    //printf("%0.06f\n",(float)countZ/array_size);
}
