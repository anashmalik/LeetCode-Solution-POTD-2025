class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<vector<int>>ans;
        for(int i=0;i<mat.size();i++){
            vector<int>a;
            int j=0;
            int k=i;
            while(k>=0 && j< mat[0].size()) a.push_back(mat[k--][j++]);
            ans.push_back(a);
        }
        for(int i=1;i<mat[0].size();i++){
            vector<int>a;
            int j=i;
            int k=mat.size()-1;
            while(k>=0 && j< mat[0].size()) a.push_back(mat[k--][j++]);
            ans.push_back(a);
        }
        vector<int>res;
        for(int i=0;i<ans.size();i++){
            if(i%2)reverse(ans[i].begin(),ans[i].end());
            res.insert(res.end(),ans[i].begin(),ans[i].end());
        }
        return res;
    }
};