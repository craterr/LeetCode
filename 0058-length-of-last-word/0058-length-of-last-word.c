int lengthOfLastWord(char * s)
{
//     int i=strlen(s)-1;
    
//     while(i>=0 && s[i]==" ")
//         i--;
    
//     int lastindex=i;
    
//     while(i>=0 && s[i]!=' ')
//         i--;
    
//     return lastindex-i;
    
    
//     int size=strlen(s)-1;
//     int count=0;
//     int flag=0;
    
//     for(int i=size;i>=0;i--)
//     {
//         if(s[i]==" " && flag)
//             break;
//         if(s[i]!=" ")
//         {
//             count++;
//             flag=1;
//         }
//     }
//     return count;
    
    
      int size=strlen(s)-1;
        int x=0;

        while(size>=0)
        {
            if(isalpha(s[size]))
            {
                x++;
                size--;
            }
            else
            {
                if(x != 0)
                break;
                else
                size--;
            }
        }
        return x;
        
}