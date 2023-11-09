

int countHomogenous(char * s)
{
    long long int size=strlen(s);
    long long int count=1;
    long long int res=1;
    long long int mod=(long long int)pow(10,9)+7;
    
    for(int i=1;i<size;i++)
    {
        count=(s[i]==s[i-1]?count+1:1);
        res=(res+count)%mod;
    }
    return res;
    
}