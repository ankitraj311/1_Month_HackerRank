string caesarCipher(string s, int k) {

    int i=0,last=0;
while(s[i] != '\0')
{
        if(k==25)
            return s;
        
        if(k>25)
        {
            k=k%25;
        }
  if((s[i] != '-' && s[i] != ','))
  {
    
        if(97<='s[i]'<=122)
        {
            if(s[i]+k<=122)
            {
                s[i]=s[i]+k;
                //cout<<"Value at 1 s["<<i<<"] is "<<s[i]<<endl;
            }
            else if(s[i]+k>122)
            {
                last=s[i]+k-122;
                s[i]=last-1+'a';
                //cout<<"Value at 2 s["<<i<<"] is "<<s[i]<<endl;
            }
        }
        
        else if(65<='s[i]'<=90)
        {
            if(s[i]+k<=90)
            {
                s[i]=s[i]+k;
                //cout<<"Value at 3 s["<<i<<"] is "<<s[i]<<endl;
            }
            else if(s[i]+k>90)
            {
                last=s[i]+k-90;
                s[i]=last-1+'A';
                //cout<<"Value at 4 s["<<i<<"] is "<<s[i]<<endl;
            }
        }
  }
  i++;
}
    return  s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}
