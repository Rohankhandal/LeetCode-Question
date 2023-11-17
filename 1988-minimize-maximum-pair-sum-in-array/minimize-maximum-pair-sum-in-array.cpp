class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,e=nums.size()-1;
        int maxi=INT_MIN;
        while(l<=e)
        {
            int temp=nums[l]+nums[e];
            maxi=max(maxi,temp);
            l++;
            e--;
        }
        return maxi;
    }
};