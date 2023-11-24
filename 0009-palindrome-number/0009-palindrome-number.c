bool isPalindrome(int x) {
    int long long r=0;
    
    if(x<0 || (x!=0 && x%10==0) )
        return false;
    int long long org=x;
    while(x)
    {
        r=r*10+x%10;
        x=x/10;
        
    }

    
    return(r==org || r/10==org);
      
}