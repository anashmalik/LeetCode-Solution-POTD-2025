class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<1){
            return 0;
        }
        int ans=1;
        while(ans<=n){
            if(ans==n)return true;
            ans*=4;
        }
        return false;
        
    }
};