class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bl, vector<vector<int>>& tr) {
        int ans=0;
        for(int i=0;i<bl.size()-1;i++){
            for(int j=i+1;j<tr.size();j++){
                int w=  min(tr[i][0], tr[j][0]) - max(bl[i][0], bl[j][0]);
                w = min(w,(min(tr[i][1], tr[j][1]) - max(bl[i][1], bl[j][1])));
                ans=max(ans,w);

            }
        }

        return 1LL * ans* ans;    
    }
};