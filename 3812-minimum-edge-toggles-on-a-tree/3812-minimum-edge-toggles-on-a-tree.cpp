class Solution {
public:
    vector<vector<pair<int,int>>> adj;
    vector<int>vis;
    string crt;
    void dfs(int x,int p, const string & ta){
        for(auto y:adj[x]){
            if(y.first==p)continue;
            dfs(y.first,x,ta);

            if(crt[y.first]!=ta[y.first]){
                crt[y.first]= (crt[y.first]=='0')?'1':'0';
                crt[x]=crt[x]=='1'?'0':'1';
                vis[y.second]=1;
            }
        }


    }
    vector<int> minimumFlips(int n, vector<vector<int>>& edges, string st, string ta) {
        adj.resize(n);
        vis.resize(edges.size());
        fill(vis.begin(),vis.end(),0);
        int i=0;
        for(auto x:edges){
            adj[x[0]].push_back({x[1],i});
            adj[x[1]].push_back({x[0],i});
            i++;
        }        
        crt = st;
        dfs(0,-1,ta);
        vector<int>ans;
        for(int i=0;i<n-1;i++){            // edages size should be n-1
            if(vis[i])ans.push_back(i);
        }
        if(crt!=ta) ans = {-1};
        return ans;
    }
};