class Solution {
public:
    string reverseWords(string &s) {
        int l=0;
        int e=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ' || i==s.size()-1)
            {
                if( i==s.size()-1)
                {
                    e=i;
                }
                else{
                    e=i-1;
                }
                while(l<=e)
                {
                    swap(s[l],s[e]);
                    l++;
                    e--;
                }
                l=i+1;
            }
        }
        return s;
    }
};