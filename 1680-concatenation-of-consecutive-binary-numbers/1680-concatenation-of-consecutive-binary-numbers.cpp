class Solution {
public:
    const int mod= 1e9+7;
    int concatenatedBinary(int n) {
        long ans=0;
        for(int i=1;i<=n;++i){
            ans=((ans<<(bit_width((unsigned)i))) | i )%mod;
        }
        return ans;
    }
};