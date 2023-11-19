class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
      if(n==0)
      {
          return 1;
      }
      int ans=10;   //let n=2
      int start=9;
      int current=9;
      
      while(n-->1 && start)
      {
          current*=(start--);       //current=9*9
          ans+=current;      //1+9+9*9=91
      }
      return ans;
    }
};