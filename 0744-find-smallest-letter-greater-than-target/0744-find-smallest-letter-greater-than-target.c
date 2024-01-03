char nextGreatestLetter(char* letters, int lettersSize, char target) 
{
    int low=0;
    int high=lettersSize-1;
    
    int ans=0;
    
    while(high>=low)
    {
        
        int mid=low+(high-low)/2;
        if(letters[mid]>target)
            {
                ans=mid;
                high=mid-1;
            }
        else
            low=mid+1;
        
        
        
    }
    return letters[ans];
    
    
}