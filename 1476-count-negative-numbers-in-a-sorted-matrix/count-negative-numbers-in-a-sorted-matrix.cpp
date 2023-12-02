class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int m=grid.size();
       int count=0;
       for(int i=0;i<m;i++)
       {
           int n=grid[i].size();
           int temp=n;
           int l=0;
           int e=n-1;
           while(l<=e)
           {
               int mid=(l+e)/2;
                if(grid[i][mid]<0)
                {
                    count+=(temp-mid);
                    temp=mid;
                    e=mid-1;
                }
                else{
                    l=mid+1;
                }
           }

       } 

       return count;
    }
};