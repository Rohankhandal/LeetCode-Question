class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        stack<int> list;
        vector<int> ans;
        for(auto it:nums)
        {
            int temp=it;
            while(temp!=0){
                int rem=temp%10;
                list.push(rem);
                temp/=10;
            }
            while(!list.empty())
            {
                int topEle=list.top();
                ans.push_back(topEle);
                list.pop();
            }
        }
        return ans;
    }
};

//MEthod-2 (first start from last and insert in vector , then in last reverse the vector)
// class Solution {
// public:
//     vector<int> separateDigits(vector<int>& nums) {
//         vector<int> ans;
//         int  n = nums.size();
//         for(int i =nums.size()-1;i>=0;i--){
//             while (nums[i] > 0)
//               {
//                    int digit = nums[i]%10;
//                    auto prev_size = ans.size();
//                    nums[i] /= 10;
//                    ans.push_back(digit);
    
    
//                }
//         }
//         reverse(ans.begin(), ans.end());
//          return  ans;
//     }
// };