bool isPerfectSquare(int num)
{
    int low=0;
    int high=num;
    
    while(high>=low)
    {
        int mid=low+(high-low)/2;
        long ans=(long)mid*mid;
        
        if(ans==num)
            return true;
        
        else if(ans<num)
            low=mid+1;
        else
            high=mid-1;
       
    }
    return false;
    
}