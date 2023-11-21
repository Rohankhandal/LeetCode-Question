class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int e=nums.size()-1;
        int firstPos=-1;
        int lastPos=-1;
        vector<int>ans;
        while(l<=e)
        {
            int mid=(l+e)/2;
            if(nums[mid] == target)
            {
                firstPos=mid;
                e=mid-1;
            }
            else if(nums[mid] < target)
            {
                l=mid+1;
            }
            else 
            {
                e=mid-1;
            }
        }
        
        l=0;
        e=nums.size()-1;
        while(l<=e)
        {
           int mid=l+(e-l)/2;
            if(nums[mid] == target)
            {
                lastPos=mid;
                l=mid+1;
            }
            else if(nums[mid] < target)
            {
                l=mid+1;
            }
            else 
            {
                e=mid-1;
            }
        }
        
    //     ans.push_back(firstPos);
    // ans.push_back(lastPos);
    // return ans;
    return {firstPos,lastPos};
    }
    
};