class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(auto str:words)
        {
            int left=0;
            int right=str.size()-1;
            int flag=1;
            cout<<left<<right;
            while(left<=right)
            {
                if(str[left]!=str[right])
                {
                    flag=0;
                    break;
                }
                left++;
                right--;
            }
            if(flag==1)
                return str;
        }
        return "";
    }
};