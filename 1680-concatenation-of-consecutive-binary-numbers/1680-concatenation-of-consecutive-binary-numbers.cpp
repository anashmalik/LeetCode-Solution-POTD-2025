class Solution {
    int MOD= 1e9+7;
public:
    int concatenatedBinary(int n) {
        long long ans=0,p=1;
        int c=0;
        while(n){
            int x=n;
            while(x){
                if(x%2==1){
                    ans= (ans + p)%MOD;
                }
                c++;
                x/=2;
                p= (p*2)%MOD;
            }
            n--;
        }
        return ans;

    }
};