class Solution {
public:
// Brute Force method
    // int distributeCandies(int n, int limit) {
    //     int count=0;
    //     for(int i =0; i<=limit; i++)
    //     {
    //         for(int j=0; j<=limit ;j++)
    //         {
    //             for(int k=0;k<=limit;k++)
    //             {
    //                 if((i+j+k)==n)
    //                     count++;
    //             }
    //         }
        
    //     }
    //     return count;
    // }

// two loop method
int distributeCandies(int n, int limit)
{
    int count=0,k;
          for(int i =0; i<=limit; i++)
        {
            for(int j=0; j<=limit ;j++)
            {
               k=n-i-j;
               if(k>=0 && k<= limit)
                    count++;
            }
        
        }
        return count;
}
};