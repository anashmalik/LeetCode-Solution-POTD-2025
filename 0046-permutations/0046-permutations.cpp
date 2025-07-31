class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> permute(vector<int>& nums) {
        help(nums,0);
        return ans;

    }
    void help(vector<int>&nums,int i){
        if(i==nums.size())ans.push_back(nums);
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            help(nums,i+1);
            swap(nums[i],nums[j]);
        }

    }


};