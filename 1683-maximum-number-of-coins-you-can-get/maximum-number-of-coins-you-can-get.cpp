// class Solution {
// public:
//     int maxCoins(vector<int>& piles) {
//         int n=piles.size();

//         sort(begin(piles),end(piles));

//         int result=0;

//         int Bob=0;  //smallest
//         int M=n-2;  //second largest
//         int Alice=n-1;  //largest    //but no need of Alice pointer


//         while(M > Bob)
//         {
//             result += piles[M];
//             M-=2;
//             Bob++;
//             Alice-=2;
//         }
//         return  result;
//     }
// };

// SECOND METHOD 2
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();

        sort(begin(piles),end(piles));

        int result=0;
        

        for(int M=n/3;M<n;M+=2)
        {
            result+=piles[M];
        }
        return  result;
    }
};