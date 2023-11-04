class Solution {
public:

//Method -1 (without sorting , better T.C )
    // std:: array<int,256> hash(string s)
    // {
    //     std::array<int, 256> hash={0};
    //     for( int i=0; i<s.size(); i++){
    //         hash[s[i]]++;          //create hash table
    //     }
    //     return hash;
    // }
    // vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //     map<std::array<int, 256> , vector <string> > mp;

    //     for(auto str: strs)
    //     {
    //         mp[hash(str)].push_back(str);
    //     }

    //     vector<vector <string>> ans;
    //     for(auto it=mp.begin(); it!=mp.end() ; it++)
    //     {
    //         ans.push_back(it->second);
    //     }
    //     return ans;
    // }


//Method 2
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string , vector <string> > mp;

        for(auto str: strs)
        {
            string s=str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);
        }

        vector<vector <string>> ans;
        for(auto it=mp.begin(); it!=mp.end() ; it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};