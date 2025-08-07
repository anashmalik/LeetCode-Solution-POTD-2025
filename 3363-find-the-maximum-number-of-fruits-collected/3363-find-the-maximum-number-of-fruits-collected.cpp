class Solution {
public:
    int maxCollectedFruits(vector<vector<int>>& f) {
        int ans=0,n=f.size();
        for(int i=0;i<n;i++){
            ans+=f[i][i];
            f[i][i]=0;
        }
        ans+=f[0][n-1]+f[n-1][0];
        for(int i=1;i<n-1;i++){
            if(i==n-2){
                ans+=f[i][n-1];
                ans+=f[n-1][i];
            }
            else{
                ans+=max(f[i][n-2],f[i][n-1]);
                ans+=max(f[n-2][i],f[n-1][i]);
            }
        }
        return ans;
    }
};