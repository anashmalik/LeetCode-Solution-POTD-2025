class Solution {
public:
int MOD= 1e9+7;
    int maximizeSquareArea(int m, int n, vector<int>& h, vector<int>& v) {
        if(m==n)return (m-1)*(n-1);
        h.push_back(m);
        v.push_back(n);
        v.insert(v.begin(),1);
        h.insert(h.begin(),1);
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
        vector<int>ch,cv;
        for(int i=0;i<h.size();i++){
            for(int j=i+1;j<h.size();j++){
                ch.push_back(h[j]-h[i]);
            }
        }
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                cv.push_back(v[j]-v[i]);
            }
        }
        sort(ch.begin(),ch.end());
        sort(cv.begin(),cv.end());
        // for(int x:ch)cout<<x<<"-";
        // cout<<endl;
        // for(int x:cv)cout<<x<<"-";
        int i=ch.size()-1,j=cv.size()-1;
        while(i>=0 && j>=0){
            if(ch[i]==cv[j]){
                long long ans= ch[i];
                ans*=ch[i];
                return (ans)%MOD;
            }
            else if(ch[i]>cv[j])i--;
            else j--;
        }

        return -1;

    }
};