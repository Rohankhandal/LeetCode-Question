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
// Nedd to compare greatest, second greatest and smallest number. So sort it.
// Given that Alice get the greatest number, you get the second greatest number and poor bob gets the last remaining which will be obviusly the smallest number among the three. In other words exploit poor bob as much as you can by giving him the smallest piles possible.

// We need the trio of numbers to be as high as possible. The picking can be of any order as stated in the question.

// Take example piles = [9,8,7,6,5,1,2,3,4]
// sort = [1,2,3,4,5,6,7,8,9]
// n/3 = 3

// pattern =>
// Bob(S): 1 2 3
// Alice(L): 5 7 9
// You(M): 4 6 8 => Total you = 18 (ans)

// Pattern => n/3 => 3 S at start
// Size of 9 => S S S M L M L M L
// Reason => because other patterns are not optimal and they yield smaller values for your coin pile compared to the above
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