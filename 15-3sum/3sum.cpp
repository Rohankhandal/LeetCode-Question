class Solution {
public:   //  T.C :- O(nlogn) + O(n^2);
      //             S.C :- O(n);
    vector<vector<int>> threeSum(vector<int>& nums) {        
        vector<vector<int>> ans;                
        sort(nums.begin(),nums.end());           //run it on (-2,-2,-2,-1,-1,-1,0,0,0,1,1,1,2,2,2);
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i] == nums[i-1])  continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int sum=nums[i] + nums[j] + nums[k];
                if(sum<0)
                {
                    j++;
                }
                else if(sum>0)
                {
                    k--;
                }
                else{
                    vector<int> temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k] == nums[k+1]) k--;
                }
            }
        }
        return ans;
    
    }
};

















//OPTIMAL SOLUTION:-
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {        //T.C :- n^2*log(n)  //S.C:- O(N)
//         set<vector<int>> st;
//             for(int i=0;i<nums.size();i++)
//         {
//             set<int> hashset;          //hashset become zero after one iteration of inner loop
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 int third=-(nums[i]+nums[j]);
//                 if(hashset.find(third) != hashset.end())     //finding third element in hashset
//                 {
//                     vector<int> temp={nums[i],nums[j],third};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//                 hashset.insert(nums[j]);
//             }
//         }
//         vector<vector<int>> ans(st.begin(),st.end());
//         return ans;
    
//     }
// };



//Method -1: Brute force method   T.C:-n^3
    // set<vector<int>> st;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         for(int j=i+1;j<nums.size();j++)
    //         {
    //             for(int k=j+1;k<nums.size();k++)
    //             {
    //                 if(nums[i] + nums[j] + nums[k] == 0)
    //                 {
    //                    vector<int>temp={nums[i],nums[j],nums[k]};
    //                    sort(temp.begin(),temp.end());
    //                    st.insert(temp);
                        
    //                 }
    //             }
    //         }
    //     }
    //     vector<vector<int>> ans(st.begin(),st.end());
        
    // return ans;