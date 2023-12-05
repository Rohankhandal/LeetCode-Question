class Solution {
public:
    string largestGoodInteger(string num) {
        int n =num.length();
        char maxChar=' ';
        for(int i=2;i<n;i++)
        {
            if(num[i] == num[i-1] && num[i]==num[i-2])
            {
                maxChar=max(maxChar,num[i]);
            }
        }

        if(maxChar == ' '){
            return "";
        }
    return string(3,maxChar);
        // int maxi=INT_MIN;
        // for(int i=0;i<num.size()-2;i++)
        // {
        //     if(num[i]==num[i+1] && num[i+1] == num[i+2])
        //     {
        //         int n=num[i]-'0';
        //         maxi=max(maxi,n);
        //     }
        // }
        
        // string ans="";
        // if(maxi!=INT_MIN)
        // {
        //     for(int i=0;i<3;i++)
        // {
        //     ans.push_back(maxi+'0');
        // }
        // }
        
        // return ans;
    }
};