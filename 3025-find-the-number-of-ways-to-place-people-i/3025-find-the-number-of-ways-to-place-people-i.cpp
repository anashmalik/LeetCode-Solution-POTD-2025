class Solution {
public:
    int numberOfPairs(vector<vector<int>>& p) {
        int n = p.size(),ans=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                if(p[i][0]>= p[j][0] && p[i][1]<= p[j][1]){
                    int re=1;
                    for(int k=0;k<n;k++){
                        if(k==i || k==j) continue;
                        if(p[k][0]<= p[i][0] && p[k][0] >= p[j][0] && p[k][1]>= p[i][1] && p[k][1] <= p[j][1] ){
                            re=0;
                            // cout<<k;
                            break;
                        }
                    }
                    ans+=re;
                }

            }
        }
        return ans-n;
    }
};