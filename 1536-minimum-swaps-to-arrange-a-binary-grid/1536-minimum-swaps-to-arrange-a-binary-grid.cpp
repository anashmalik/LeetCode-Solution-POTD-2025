class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int ans=0,n=grid.size();
        vector<int>v(n,1);
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=n-1;j>-1;j--){
                if(grid[i][j]==0)c++;
                else break;
            }
            v[i]=c;
        }
        for(int i=0;i<n;i++){
            int j,t=0;
            for(j=0;j<n;j++){
                if(v[j]>= (n-i-1)){
                    v[j]=-1;
                    break;
                }
                else if (v[j]!=-1)
                    t++;
            }
            cout<<i<<" "<<j<<" "<<t<<endl;
            if(j==n){
                return -1;
            }
            else ans+=t;
        }

        return ans;
    }
};