class Solution {
public:
    bool checkIfPangram(string sentence) {
        char ch[26]={0};
         for(int i=0;i<26;i++)
        {
            cout<<ch[i]<<" ";
        }
        for(int i=0;i<sentence.size();i++)
        {
            int index=(sentence[i]-97);       //sub 97 instead of 96 bcz hashmap start from index 0
            cout<<index<<" ";
            ch[index]=1;
        }
        for(int i=0;i<26;i++)
        {
            if(ch[i]!=1)
            {
                return false;
            }
        }
        return true;
    }
};