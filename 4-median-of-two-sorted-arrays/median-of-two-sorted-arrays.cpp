class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1=nums1.size();
        int len2=nums2.size();
        int i=0,j=0;
        vector<int> ans;
        double median;
        while(i<len1 && j < len2){
            if(nums1[i]<=nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                
            }
            else
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<len1)
        {
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<len2)
        {
            ans.push_back(nums2[j]);
            j++;
        }

        int ansSize=ans.size();
        cout<<ansSize;
        if(ansSize % 2 ==0)
        {
            median=(ans[ansSize/2-1]+ans[ansSize/2])/2.0;
        }
        else
        {
            median=ans[ansSize/2];
        }

        return median;



    }
};