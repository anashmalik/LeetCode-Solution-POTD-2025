class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0,sum=0,ans=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            ans=max(ans,sum);
            if(sum<0) sum=0;
        }
        return ans;
    }
};