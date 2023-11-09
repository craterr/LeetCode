

int countHomogenous(char * s)
{
    long long int size=strlen(s);
    long long int count=1;
    long long int res=1;
    long long int mod=(long long int)pow(10,9)+7;
    
    // this is often used in programming to prevent integer overflow.
    //     Integer overflow occurs when the result of an arithmetic operation 
    //     xceeds the maximum representable value for the data type being used.
    
    for(int i=1;i<size;i++)
    {
        count=(s[i]==s[i-1]?count+1:1);
        res=(res+count)%mod;
    }
    return res;
    
}