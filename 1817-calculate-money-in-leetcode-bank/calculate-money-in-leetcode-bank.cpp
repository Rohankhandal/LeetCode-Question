class Solution
{
    public:
        int totalMoney(int n)
        {
        	//O(1) approach
            int terms = n / 7;   //weeks
            int first = 28;
            int last = 28 + (terms - 1) *7;   //AP formula for nth terms
            int result = terms *(first + last) / 2;   //sum of nth terms in an AP

           	//final week remaining days=n%7
            int start_money = 1 + terms;
            for (int day = 1; day <= (n % 7); day++) {
                result+=start_money;
                start_money++;
            }
        return result;
        }
};

// Simple approach
// int i=0,M=0,temp;
//         int count=0;
//         while(i < n)
//         {
//             if(i%7==0)
//             {
//                 M+=1;
//             }
//             temp=i%7;
//             count+=(M+temp);

//             i++;
//         }
//         return count;