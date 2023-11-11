class Solution
{
    public:

       	//     method :1 Brute force
       	//     recognise pattern and then store in another array
       	//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
       	//     int matrix[3][3];
       	//     int n=3;
       	//    for (int i = 0; i < 3; i++) {
       	//       for (int j = 0; j < 3; j++) {
       	//           matrix[j][(n-1)-i]=arr[i][j];
       	//       }
       	//    }

       	//    cout<<"Printing matix:";

       	//    for (int i = 0; i < 3; i++) {
       	//       for (int j = 0; j < 3; j++) {
       	//           cout<<matrix[i][j]<<" ";
       	//       }
       	//       cout<<endl;
       	//    }
        void rotate(vector<vector < int>> &matrix)
        {
            int n = matrix.size();
           	//Transpose the matrix
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }

           	//reverse every row elemnts
            for (int i = 0; i < n; i++)
            {
               	//row=matrix[i]
                reverse(matrix[i].begin(), matrix[i].end());
            }
        }
};