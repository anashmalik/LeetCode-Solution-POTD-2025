class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ma = *max_element(nums.begin(),nums.end());
        int ans =0;
        for(int i=0;i<nums.size();i++){
            int t=0;
            while(i<nums.size() && nums[i]==ma){
                t++;
                i++;
            }
            ans=max(ans,t);
        }
        return ans;
    }
};