class Solution {
public:
    string largestOddNumber(string num) {
        
        for(int i=num.size()-1;i>=0;i--)
        {
          int number=num[i]-'0';
          if(number%2==1)
          {
            return num.substr(0,i+1);
          }
        }
        return "";

    }
};

// int maxi=0;
//         string ans="";
//         for(int i=0;i<num.size();i++)
//         {
//           ans+=num[i];
//           int number=stoi(ans);
//           if(number%2==1)
//           {
//             maxi=max(maxi,number);
//           }
//           else
//           {
//             ans="";
//           }
//         }
//         return maxi==0?"":to_string(maxi);