class Solution {
public:
    bool isVowel(char ch)
    {
        // Make the list of vowels
    string str = "aeiouAEIOU";
    return (str.find(ch) != string::npos);
    }
    string sortVowels(string s) {
        //Second Method -2:Using Map
        unordered_map<char,int> mp;

        for(char &ch:s)
        {
            if(isVowel(ch))
            {
                mp[ch]++;
            }

        }

        string temp="AEIOUaeiou";
        int j=0;  //pointing to first element of temp

        for(int i=0;i<s.length(); i++)
        {
            if(isVowel(s[i]))
            {
                //vowel=temp[i];
                while(mp[temp[j]] == 0)
                {
                    j++;
                }
                s[i]=temp[j];
                mp[temp[j]]--;
            }
        }
        return s;



    //First basic method 
    //    string temp;
    //    for(char &ch:s)
    //    {
    //        if(isVowel(ch))
    //        {
    //            temp.push_back(ch);
    //        }
    //    } 
    //    sort(begin(temp),end(temp));
    //    int j=0;
    //    for(int i=0;i<s.length();i++)
    //    {
    //        if(isVowel(s[i]))
    //        {
    //            s[i]=temp[j];
    //            j++;
    //        }
    //    }
    //    return s;
    }
};