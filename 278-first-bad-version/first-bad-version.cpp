// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
      int l=0;
      int e=n;
      int ans=-1;
      while(l<=e)
      {
          int mid=l+(e-l)/2;
          if(isBadVersion(mid)){
              ans=mid;
              e=mid-1;
          }
          else{
              l=mid+1;
          }
      }  
      return ans;
    }
};