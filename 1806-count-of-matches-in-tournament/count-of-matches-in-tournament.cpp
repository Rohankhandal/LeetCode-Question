class Solution {
public:
    int numberOfMatches(int n) {
        int count=0;
        while(n>1)
        {
                int rev=n/2;
                count+=rev;
                n=n-rev;
           
        }
        return count;

    }
};