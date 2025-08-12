string counterGame(long n) {

    int power=0;
    int neww=1;
    if(n==1)
        return "Richard";
        
    if(n>0 && (n & (n-1)) == 0)
    {
        power=log2(n);
        cout<<"1Value of n is "<<n<<endl;
        cout<<"1Value of power is "<<power<<endl;
        
        if(power%2 == 0)
            return "Richard";
        else
            return "Louise";
    }
    while(neww<n)
    {
        neww=neww*2;
        cout<<"2Value of neww is "<<neww<<endl;
        cout<<"2Value of n-neww is "<<n-neww<<endl;
    }
            power=log2(n-neww);
        cout<<"3Value of power is "<<power<<endl;
        if(power%2 == 0)
            return "Richard";
        else
            return "Louise";
}
