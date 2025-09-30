class Solution {
public:

    int fibon(int n, vector<int>&dp) 
    {
        //base case
        if(n<=1)
        return n;
        //already calculated result
        if(dp[n]!=-1)
        return dp[n];

        return dp[n]= fibon(n-1,dp)+fibon(n-2,dp);
    }
    int fib(int n) {

        vector<int>dp(n+1, -1);
        return fibon(n,dp);
        
    }
};