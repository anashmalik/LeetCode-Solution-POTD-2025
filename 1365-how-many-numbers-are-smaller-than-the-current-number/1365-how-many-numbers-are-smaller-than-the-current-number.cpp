class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        auto x=nums;
        sort(x.begin(),x.end());
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=nums.size()-1;i>=0;i--){
            mp[x[i]]=i;
        } 
        for(int i=0;i<nums.size();i++){
            ans.push_back(mp[nums[i]]);
        }      
        return ans;        
    }
};