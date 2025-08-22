class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int l=grid[0].size(),r=-1,t=grid.size(),b=-1;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]){
                    l=min(l,j);
                    r=max(r,j);
                    t=min(t,i);
                    b=max(b,i);
                }
            }
        }
        if(r==-1)return 0;
        return (r-l+1)*(b-t+1);
    }
};