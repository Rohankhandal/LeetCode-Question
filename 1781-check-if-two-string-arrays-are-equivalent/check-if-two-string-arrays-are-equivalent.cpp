class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int len1=word1.size();
        int len2=word2.size();
        string s1="";
        string s2="";
        for(int i=0;i<len1;i++)
        {
            s1+=word1[i];
        }
        for(int i=0;i<len2;i++)
        {
            s2+=word2[i];
        }
        if(s1==s2)
            return true;
        else
            return false;
    }
};

// class Solution {
// public:
//     bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
//         int i=0,j=0; int i1=0, i2=0;
//         while(true){
//             if (i1>=word1.size())return false;
//             if (i2>=word2.size())return false;
//             if (word1[i1][i]!=word2[i2][j])return false;
//             i++; j++;
//             if (i== word1[i1].size()){i=0;i1++;}
//             if (j== word2[i2].size()){j=0;i2++;}
//             if (i1== word1.size() && i2==word2.size())break;
            
//         }
//         return true;
//     }
// };