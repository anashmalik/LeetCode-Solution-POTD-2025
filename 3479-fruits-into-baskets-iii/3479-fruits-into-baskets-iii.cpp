class Solution {
public:
    int numOfUnplacedFruits(vector<int>& f, vector<int>& b) {
        int ans=0;
        int n=b.size();
        int m = sqrt(n);
        int sections = (n+m-1)/m;
        vector<int>secmax(sections,0);
        for(int i=0;i<n;i++){
            secmax[i/m]=max(secmax[i/m],b[i]);
        }
        for(auto x:f){
            int NotSelected=1;
            for(int s=0;s<sections;s++){
                if(secmax[s]<x)continue;
                int end=min(n,(s+1)*(m));
                secmax[s]=0;
                for(int i= (s*m);i< end;i++){
                    if(b[i]>=x && NotSelected){
                        b[i] = 0;
                        NotSelected=0;
                    }
                    else{
                        secmax[s]=max(secmax[s],b[i]);
                    }
                }
                break;
            }
            ans+=NotSelected;
        }
        return ans;
    }
};