class Solution
{
    public:
        long long countBadPairs(vector<int> &nums)
        {
            long long  gp=0;  //no. of good pair in nums
            //total no. of pair=no. of good pair + no. of bad pair
            unordered_map<int,int>mp;
            for(int i=0;i<nums.size();i++){
                int x=nums[i]-i;

                //check in good pair 
                if(mp.find(x)!=mp.end())
                {
                    gp+=mp[x]++;
                }
                else {
                    mp[x]=1;
                }
            }
            long long ttl=(nums.size()*(nums.size()-1))/2;  //total no. of two pair
            return ttl-gp;
        }
};