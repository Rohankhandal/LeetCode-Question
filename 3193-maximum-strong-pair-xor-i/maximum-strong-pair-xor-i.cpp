class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int max=INT_MIN;
        for(int i=0; i<nums.size();i++)
        {
            for(int j=0; j< nums.size() ;j++)
            {
                if(abs(nums[i]-nums[j])<=min(nums[i],nums[j]))
                {
                    int bitOR=nums[i] ^ nums[j];
                    if(bitOR > max)
                    {
                        max=bitOR;
                    }
                    }
            }
        }
        return max;
    }
};
//  int maximumStrongPairXor(std::vector<int>& nums) {
//         int ans = 0;

//         // Iterate through each pair of numbers in the vector.
//         for (auto x : nums) {
//             for (auto y : nums) {
//                 // Check if the pair (x, y) is a strong pair.
//                 if (abs(x - y) <= std::min(x, y)) {
//                     // Update the maximum XOR value.
//                     ans = std::max(ans, x ^ y);
//                 }
//             }
//         }

//         // Return the maximum XOR value of strong pairs.
//         return ans;
// }