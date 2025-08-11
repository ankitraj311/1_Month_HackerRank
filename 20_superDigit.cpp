int superDigit(string n, int k) {

    int lenght=n.size(); ///calculating size of string
    
    if(lenght==1)
        return stoi(n); // if x length is 1 then return as it is.
        
    long long sum=0; //range is large thats why need long long var.
    //int sum=0;
    for(int i=0;i<lenght;i++)
    {
        sum=sum+n[i]-48; //here we are subtracting 48 value form asci value of n[i].
        //like 1 ascii=49, 2 ascii=50.  In this way
    }
    sum=sum*k; //multiplying result to k time.
    
    return superDigit(to_string(sum), 1); //using recursion to solve the problem
    

}
