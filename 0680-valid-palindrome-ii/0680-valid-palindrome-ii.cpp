class Solution {
public:
bool checkpalindrome(int i , int j  , string s)
{
    while(i<=j)
    {
        if(s[i]!=s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                return checkpalindrome(i,j-1,s)||checkpalindrome(i+1,j,s);
                  
            }
        }
        return true;
    }
};