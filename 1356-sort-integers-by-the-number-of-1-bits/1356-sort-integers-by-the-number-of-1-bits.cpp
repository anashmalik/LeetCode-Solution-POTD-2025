class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<vector<int>>mp;
        for(auto x:arr){
            int t=0,temp=x;
            while(x){
                if(x%2)t++;
                x/=2;
            }
            mp.push_back({t,temp});
        
        }
        sort(mp.begin(),mp.end());
        int i=0;
        for(auto x:mp){
            arr[i++]=x[1];
        }
        return arr;

        
    }
};