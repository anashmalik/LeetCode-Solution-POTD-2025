class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0,ans=0,j=h.size()-1;
        while(i<j){
            int water= min(h[i],h[j])*(j-i);
            ans= max(ans,water);
            if(h[i]<h[j])i++;
            else j--;
        }
        return ans;
    }
};