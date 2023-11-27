class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            
            if(!isalpha(s[i]) && !isdigit(s[i]))
            {
                i++;
            }
            if(s[i]>=65 && s[i]<=91)
            {
                s[i]=s[i]+32;
            }
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                ans+=s[i];
            }
            
        }
        cout<<ans;
        //check palindrome
        int l=0;
        int e=ans.size()-1;
        while(l<=e)
        {
            if(ans[l]!=ans[e])
            {
                return false;
            }
            l++;
            e--;
        }
        
        return true;
    }
};