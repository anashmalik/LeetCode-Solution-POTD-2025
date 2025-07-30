class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1,k=nums.size()-1;
            while(j<k){
                if(0 == nums[i]+nums[j]+nums[k]){
                    ans.insert({nums[i],nums[j],nums[k]});
                    break;
                }
                else if(0<nums[i]+nums[j]+nums[k]){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        vector<vector<int>> res(ans.begin(),ans.end());
        return res;
    }
};