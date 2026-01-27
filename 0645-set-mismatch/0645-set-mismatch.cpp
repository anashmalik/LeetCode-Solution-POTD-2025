class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>c(nums.size()+1);
        int d,a;
        for(auto x:nums)c[x]++;
        for(int i=1;i<=nums.size();i++){
            if(c[i]==0) a=i;
            if(c[i]==2) d=i;
        }
        return {d,a};
    }
};