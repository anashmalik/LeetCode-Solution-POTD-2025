class Solution {
public:
    int timeRequiredToBuy(vector<int>& ti, int k) {
        int x=0;
        for(int i=0;i<ti.size();i++){
            if(i<=k)x+= min(ti[k],ti[i]);
            else{
                x+= min(ti[k]-1,ti[i]);
            }
        }
        return x;
        
    }
};