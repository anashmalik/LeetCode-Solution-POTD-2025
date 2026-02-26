class Solution {
public:
    int numSteps(string s) {
        long long number=0,ans=0,n=s.size(),c=0;
        for(int i=n-1;i>=0;i--){
            if(c==0 and i==0)continue;
            if(s[i]=='1'){
                if(c==0){
                    c=1;
                    ans+=2;
                }
                else{
                    ans++;
                }
            }
            else{
                if(c==0){
                    ans++;
                }
                else{
                    ans++;
                    ans++;
                }
            }
        }
        return ans;
    }
};