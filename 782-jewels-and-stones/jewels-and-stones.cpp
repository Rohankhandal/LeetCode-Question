class Solution
{
    public:
        int numJewelsInStones(string jewels, string stones)
        {
            int count = 0;
           	// for(int i=0;i < jewels.size();i++){
           	//     for(int j=0; j < stones.size();j++)
           	//     {
           	//         if(jewels[i] == stones[j])
           	//             count++;
           	//     }
           	// }
            vector<int>hashTable(256,0);  //create hashTable
            for(auto it:jewels)
            {
                hashTable[it]=1;     //make true at values of Jewels
            }
            for(auto it:stones)
            {
                if(hashTable[it])   //if coressponding char found in hashTable then increment count by 1
                    count++;
            }

            return count;
        }
};