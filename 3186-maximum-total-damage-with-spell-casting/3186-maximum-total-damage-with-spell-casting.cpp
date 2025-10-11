class Solution {
public:
    unordered_map<int,int>mp;
    long long maximumTotalDamage(vector<int>& power) {
        vector<int>s;
        for(auto x:power){
            mp[x]++;
            if(mp[x]==1)
                s.push_back(x);
        }
        sort(s.begin(),s.end());
        vector<long long>dp(s.size(),-1);
        return help(s,0,dp);        
    }
    long long help(vector<int>&s,int i,vector<long long>&dp){
        if(i>=s.size())return 0;
        if(dp[i]!=-1)return dp[i];
        long long ans=0;
        ans = help(s,i+1,dp);

        long long t= (long long) mp[s[i]];
        long long v= s[i],k=i;
        while(i<s.size() && s[i]<=v+2){
            i++;
        }
        ans = max(ans,help(s,i,dp)+(t*v));
        // cout<<k<<" "<<i<<" "<<ans<<endl;
        return dp[k]= ans;
    }
};