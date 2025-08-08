class Solution {
public:
    double soupServings(int n) {
        if(n>10000) return 1;
        vector<vector<double>>dp(n+1,vector<double>(n+1,-1));
        return help(n,n,dp);
    }
    double help(int a,int b,vector<vector<double>>&dp){
        if(a<=0 && b<=0)return 0.5;
        if(a<=0)return 1.0;
        if(b<=0)return 0;
        if(dp[a][b]!=-1)return dp[a][b];
        return dp[a][b]= (help(a-100,b,dp)+help(a-75,b-25,dp)+help(a-50,b-50,dp)+help(a-25,b-75,dp))*0.25;
    }
};