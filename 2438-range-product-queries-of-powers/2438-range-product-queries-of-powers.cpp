class Solution {
public:
    int mod=1e9+7;
    vector<int> productQueries(int n, vector<vector<int>>&  q) {
        vector<int>ans;
        vector<long long>temp,powers;
        temp.push_back(1);
        while(temp[temp.size()-1]<n){
            temp.push_back(temp[temp.size()-1]*2);
        }
        int i=temp.size();
        while(n && i){
            if(temp[i-1]<=n){
                powers.insert(powers.begin(),temp[i-1]);
                n-=temp[i-1];
            }
            i--;
        }
        // cout<<powers[0]<<"-" <<powers[0]<<endl;
        // for(i=1;i<powers.size();i++){
        //     cout<<powers[i]<<"-" ;
        //     powers[i] = (powers[i]*powers[i-1])%mod;
        //     cout<<powers[i]<<endl;
        // }
        for(auto x:q){
            int a=1;
            for(int j=x[0];j<=x[1];j++){
                a =(a*powers[j])%mod;
            }
            ans.push_back(a);
        }
        return ans;
        
    }
};