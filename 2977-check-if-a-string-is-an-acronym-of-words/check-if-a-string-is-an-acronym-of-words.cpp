class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans="";
        for( auto str : words )
        {
            char ch=str[0];
            ans+=ch;

        }
        if(ans==s) return true;
        else return false;
    }
};