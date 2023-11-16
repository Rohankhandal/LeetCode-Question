class Solution {
public:
    int smallestEvenMultiple(int n) {
        int temp=n;
        while(true)
        {
            if(temp % 2==0)  //if temp is mutiple of 2 then return temp;
                return temp;
            
            temp+=n; //increment the value by n
        }
        return -1;
    }
};