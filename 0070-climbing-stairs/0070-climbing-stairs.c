int climbStairs(int n) 
{
    
    
 if (n==1||n==2||n==3)
     return n;
 
    int a=2,b=3,res;
 for(int i=4;i<=n;i++)
 {
     res=a+b;
     a=b;
     b=res;
 
     
 }
    return b;
    
}