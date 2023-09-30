class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-2;i++)
        // {
        //     if(nums[i]==nums[i+1])
        //     {
        //         return nums[i];
        //     }
        // }
        // return -1;


        //Marking method(visited solution)
        // for(int i=0;i<nums.size();i++)
        // {
        //     int index=abs(nums[i]);
        //     //already visited
        //     if(nums[index]<0)
        //         return index;

        // //visited mark
        // nums[index]=nums[index]*-1;
        // }
        // return -1;


        //positioing method
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
    return nums[0];
    }
};