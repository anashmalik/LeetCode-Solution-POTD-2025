class Solution {
public:
    int totalFruit(vector<int>& f) {
        int ans=0;
        int j=0;
        unordered_map<int,int>mp;
        for(int i=0;i<f.size();i++){
            mp[f[i]]++;
            while(mp.size()>2 && j<i){
                mp[f[j]]--;
                if(mp[f[j]]==0){
                    mp.erase(f[j]);
                }
                j++;
            }
            ans=max(ans, i-j+1);
        }
        return ans;
    }
};