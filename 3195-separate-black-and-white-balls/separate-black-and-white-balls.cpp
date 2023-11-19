class Solution {
public:
    long long minimumSteps(string s) {
        long long count=0;
        int l=0;
        int e=s.size()-1;
        while(l<=e)
        {
            if(s[l]=='1' && s[e]=='0')
            {
                swap(s[l],s[e]);
                count+=(e-l);
                l++;
                e--;
                
            }
            else if(s[l]=='0')
                l++;
            else 
                e--;
        }
        
        return count;
    }
};