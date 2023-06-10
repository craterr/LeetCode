bool isPalindrome(int x)

{
      if(x == 0)
            return true;
        if(x < 0 || x % 10 == 0)
            return false;
        
        int reverse = 0;
        
        while(x > reverse)
        {
            int lastDigit = x % 10;
            x /= 10;
            reverse = reverse * 10 + lastDigit;
        }
        
        return x == reverse || x == reverse / 10;
}