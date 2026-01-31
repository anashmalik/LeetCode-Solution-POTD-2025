class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int t=0;
        for(int i=1;t<target.size()&&i<=n;i++){
            if(target[t]==i)
            {
                ans.push_back("Push");
                t++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            
        }
        return ans;
    }
};