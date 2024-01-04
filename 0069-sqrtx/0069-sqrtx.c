int mySqrt(int x) 
{
    int low=0;
    int high=x;
    
    while(high>=low)
    {
        int mid=low+(high-low)/2;
        long ans=(long) mid*mid;
        
        if(ans==x)
            return mid; //when it has a perfect square
        
        else if(ans>x)
            high=mid-1;
        else
            low=mid+1;
    }
    return high; // Returning floor value if it doesnt have a perfect square
    
}