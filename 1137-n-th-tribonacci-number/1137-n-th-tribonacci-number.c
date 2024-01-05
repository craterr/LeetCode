

int tribonacci(int n)
{
    if(n==0)
        return 0;
    if(n==1 || n==2) return 1;
    int prev3=0;
    int prev2=1;
    int prev=1;
    int cur;
    
    for(int i=3;i<=n;i++)
    {
        cur=prev3+prev2+prev;
        prev3=prev2;
        prev2=prev;
        prev=cur;
    }
    return prev;
}