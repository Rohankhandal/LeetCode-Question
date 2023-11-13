class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
           	// unordered_map<int, int> m;
           	// int n=nums.size();

           	// for(int i=0;i < n;i++){
           	//     int x=nums[i];
           	//     int y=target-x;
           	//     if(m.find(y)!=m.end())     	//search for complement element in map
           	//     {
           	//         return {i,m[y]};
           	//     }

           	//     m[nums[i]]=i; 	//store element corresponding to index
           	// }
           	// return {-1,-1};

            int n = nums.size();
            vector<pair<int, int>> v;
            for (int i = 0; i < n; i++)
                v.push_back({ nums[i],
                    i });

            sort(v.begin(), v.end());

            int s = 0, e = n - 1;
            while (s <= e)
            {
                int sum = v[s].first + v[e].first;
                if (sum == target)
                    return {
                        v[s].second,
                        v[e].second
                    };
                else if (sum > target)
                    e--;
                else
                    s++;
            }

            return { -1,
                -1 };
        }
};