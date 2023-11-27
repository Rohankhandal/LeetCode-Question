// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string res;
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s[i] >= 'A' && s[i] <= 'Z') res += (s[i] + ('a' - 'A'));
//             else if (s[i] >= 'a' && s[i] <= 'z') res += s[i];
//             else if (s[i] >= '0' && s[i] <= '9') res += s[i];
//         }
//         int i = 0;
//         int j = res.length() - 1;
//         while (i < j)
//         {
//             if (res[i] != res[j]) return false;
//             i++;
//             j--;
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool isPalindrome(string s) {
       int start=0;
       int end=s.size()-1;
       while(start<=end){
           if(!isalnum(s[start])){start++; continue;}
           if(!isalnum(s[end])){end--;continue;}
           if(tolower(s[start])!=tolower(s[end]))return false;
           else{
               start++;
               end--;
           }
       }
       return true;
}
};