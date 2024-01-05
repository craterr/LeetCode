int fib(int n)
{
    if(n==0 || n==1)
        return n;
    
    int prev2=0;
    int prev=1;
    
    int cur;
    
    for(int i=2;i<=n;i++)
    {
        cur=prev2+prev;
        prev2=prev;
        prev=cur;
    }
    return prev;
    
    

}