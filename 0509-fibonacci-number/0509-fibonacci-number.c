

int fib(int n)
{
    if(n<=1)
        return n;
    // int F[30];
    // F[0]=0,F[1]=1;
    // for(int i=2;i<=n;i++)
    // {
    //     F[i]=F[i-1]+F[i-2];
    // }
    // return F[n];
    int a=0,b=1;
    int res;
    for(int i=2;i<=n;i++)
    {
        res=a+b;
        a=b;
        b=res;
    }
    return b;
}
