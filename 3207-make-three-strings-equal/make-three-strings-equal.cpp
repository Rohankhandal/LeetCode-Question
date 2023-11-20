class Solution
{
    public:
        int findMinimumOperations(string s1, string s2, string s3)
        {
            if (s1[0] != s2[0] || s2[0] != s3[0] || s3[0] != s1[0])
            {
                return -1;
            }
            int n1 = s1.size();
            int n2 = s2.size();
            int n3 = s3.size();
            int mini = min(n1, min(n2, n3));
            int i = 0;
            for (i = 0; i < mini; i++)
            {
                if (s1[i] != s2[i] || s3[i] != s2[i]) return n1 + n2 + n3 - (3 *i);
            }
            return n1 + n2 + n3 - (3 *i);
        }
};