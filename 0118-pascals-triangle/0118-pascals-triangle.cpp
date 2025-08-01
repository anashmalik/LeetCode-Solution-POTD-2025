class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans={{1}};
        for(int i=0;i<n-1;i++){
            vector<int> a ={1};
            for(int j=1;j<ans[i].size();j++){
                a.push_back(ans[i][j]+ans[i][j-1]);
            }
            a.push_back(1);
            ans.push_back(a);
        }
        return ans;
    }
};