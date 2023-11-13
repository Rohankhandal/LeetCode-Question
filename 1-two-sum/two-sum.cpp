class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int > m;
        int n=nums.size();

        for(int i=0;i<n;i++){
            int x=nums[i];
            int y=target-x;
            if(m.find(y)!=m.end())      //search for complement element in map
            {
                return {i,m[y]};
            }

            m[nums[i]]=i;  //store element corresponding to index
        }
        return {-1,-1};
    }
};