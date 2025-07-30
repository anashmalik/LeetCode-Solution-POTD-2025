class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(),cmax=1,cmin=1;
        int ans=*max_element(nums.begin(),nums.end());
        for(auto &x:nums){
            int t = cmax*x;
            cmax=max({t,cmin*x,x});
            cmin=min({t,cmin*x,x});
            ans = max(ans,cmax);
        }
        return ans;
    }
};