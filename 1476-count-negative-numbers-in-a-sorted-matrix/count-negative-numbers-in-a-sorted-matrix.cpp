// Method-1
// T.C:-O(m+n)
// S.C:-O(1)
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int ans = 0, up = m-1, left = 0;
        while(up>=0 and left<n){
            if(grid[up][left]<0){
                ans += (n-left);
                up--;
            }
            else if(grid[up][left]>=0){
                left++;
            }
        }
        return ans;
    }
};



// Method -2
// class Solution {
// public:
//     int bs(vector<int> v, int col){
//         int low=0, high=col-1;
//         while(low<=high){
//             int mid=(low+high)/2;
//             if(v[mid]<0)high=mid-1;
//             else low=mid+1;
//         }
//         if(low>=col)return 0;
//         return col-low;
//     }
//     int countNegatives(vector<vector<int>>& grid) {
//         int r=grid.size();
//         int c=grid[0].size();
//         int i,j;
//         int count=0;
//         for(i=0;i<r;i++){
//             count=count+bs(grid[i],c);
//         }
//         return count;
//     }
// };





// class Solution {
// public:
//     int countNegatives(vector<vector<int>>& grid) {
//        int m=grid.size();
//        int count=0;
//        for(int i=0;i<m;i++)
//        {
//            int n=grid[i].size();
//            int temp=n;
//            int l=0;
//            int e=n-1;
//            while(l<=e)
//            {
//                int mid=(l+e)/2;
//                 if(grid[i][mid]<0)
//                 {
//                     count+=(temp-mid);
//                     temp=mid;       //main code to remove a bug which is occur when full row is negative
//                     e=mid-1;
//                 }
//                 else{
//                     l=mid+1;
//                 }
//            }

//        } 

//        return count;
//     }
// };