class Solution {
public:
    int totalMoney(int n) {
        int i=0,M=0,temp;
        int count=0;
        while(i<n)
        {
            if(i%7==0)
            {
                M+=1;
            }
            temp=i%7;
            count+=(M+temp);

            i++;
        }
        return count;
    }
};