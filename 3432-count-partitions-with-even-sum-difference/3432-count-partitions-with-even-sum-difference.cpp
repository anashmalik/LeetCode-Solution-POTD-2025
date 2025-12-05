class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        for(auto x:nums) sum+=x;
        int s2=0,ans=0;
        for(int i=0;i<nums.size()-1;i++){
            int x=nums[i];
            s2+=x;
            sum-=x;
            ans+= (abs(sum-s2)%2==0);
        }
        return ans;
    }
};