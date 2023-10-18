class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256]={0}; //mapping of each char of langugage 's' to lanaguage 't'
        bool istCharsMapped[256]={0};  //stores if t[i] char already mapped with s[i]
        if(s.size() != t.size())
        {
            return false;   // according to one test case
        }
        for(int i=0;i<s.size();i++){
            if(hash[s[i]]==0 && istCharsMapped[t[i]]== 0)
            {
                hash[s[i]] = t[i];
                istCharsMapped[t[i]] = true;
            }
        }

        for(int i=0; i<s.size();i++)
        {
            if(char(hash[s[i]]) != t[i])
            {
                return false;
            }
        }
        return true;
    }
};