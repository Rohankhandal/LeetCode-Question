class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        int sum=0;
        if(x<0)
            return false;
        while(temp!=0)
        {
            int rem=temp%10;
            if(sum>=INT_MAX/10)
                return false;
            sum=sum*10+rem;
            temp/=10;
        }
        if(sum==x)
            return true;
        else 
            return false;
    }
};