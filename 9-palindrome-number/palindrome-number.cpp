class Solution {
public:
    bool isPalindrome(int x) {
        //  jodi -ve number hoy tahile palindrome hobe na 
        // if (x<0)
        // return 0;

        // int num = x, rem, ans=0;
        // while (num)
        // {
        //     rem =num%10;
          
        //     num/=10;
        //     if (ans>INT_MAX/10)
        //     {
        //         return 0;
        //     }
        //       ans = ans*10+rem;
        // }
        // if (ans==x)
        // return 1;
        // else return 0;
        if (x<0)
        {
            return 0;
        }

        int num = x, lastdigit; long long ans=0;
        while (x!=0)
        {
            lastdigit = x%10;
            ans = ans*10+lastdigit;
            x= x/10;
        }
        if (ans ==num)
        {
            return 1;
        }
        else return 0;

     
        
    }
};