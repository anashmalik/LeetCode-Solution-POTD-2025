class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        do{
            // for(auto x:nums)cout<<x<<" ";
            // cout<<endl;
            s.insert(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};