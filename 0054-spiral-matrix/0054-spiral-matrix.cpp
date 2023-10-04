class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        int m=matrix.size();
        int n=matrix[0].size();
        int total_element=m*n;
        int startRow=0;
        int endRow=m-1;
        int startCol=0;
        int endCol=n-1;

        int count=0;
        while(count<total_element)
        {
            //print startinRow
            for(int i=startCol;i<=endCol && count<total_element ; i++)
            {
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
            //print endCol
            for(int i=startRow;i<=endRow && count<total_element ; i++)
            {
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            //print endRow
            for(int i=endCol;i>=startCol && count<total_element ; i--)
            {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            //print startCol
            for(int i=endRow;i>=startRow && count<total_element ; i--)
            {
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
        
    }
};