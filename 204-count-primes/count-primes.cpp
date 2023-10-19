class Solution {
public:
    /*1.Naive Approach
    2.sqrt Approach
    3.Sieve of Eratosthenes
    4.Segmented Sieve
    */
        int countPrimes(int n) {
       if (n==0) return 0;

       vector<bool> prime(n,true); //all are prime marked already
       prime[0]=prime[1]=false;
       int ans=0;

       for(int i=2;i<n;i++)
       {
           if(prime[i])
           {
               ans++;
               
                int j=2*i;
               while(j<n)
               {
                   prime[j]=false;
                   j+=i;
               }
           }
       }
       return ans;
    }
};