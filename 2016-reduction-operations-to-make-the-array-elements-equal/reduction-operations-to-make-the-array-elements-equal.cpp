class Solution
{
    public:
        int reductionOperations(vector<int> &nums)
        {
            sort(nums.begin(),nums.end());  //sort the function so that we get highest and second highest as last two element
            int n=nums.size();
            int ops=0;
            for(int i=n-1;i>=1;i--)
            {
                if(nums[i] == nums[i-1])
                    continue;

                ops+=(n-i);
            }
            return ops;




           //T.C=> N^2 ,so Get TLE
            // int flag=1,count=0;
            // while (true)
            // {
            //      int largest = INT_MIN, larIndex;
            //      int nextLargest = INT_MIN;
            //     for(int i=1;i<nums.size();i++)
            //     {
            //         if(nums[i]!=nums[0])
            //         {
            //             flag=0;
            //             break;
            //         }
            //         if(i==nums.size()-1)
            //             flag=1;
            //     }
            //     if(flag==1)
            //         break;

            //     for (int i = 0; i < nums.size(); i++)
            //     {
            //         if (nums[i] > largest)
            //         {
            //             nextLargest = largest;
            //             largest = nums[i];
            //             larIndex = i;
            //         }
            //         else if (nums[i] > nextLargest && largest != nums[i])
            //         {
            //             nextLargest = nums[i];
            //         }
            //     }
            //    	//place nextLargest value into largest value index;
            //     nums[larIndex] = nextLargest;
            //     count++;
            //     cout << largest << " " << nextLargest << endl;
                
            // }

            // return count;

           
        }
};