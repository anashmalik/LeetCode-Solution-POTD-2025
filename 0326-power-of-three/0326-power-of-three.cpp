class Solution {
public:
    bool isPowerOfThree(int n) {
        int ans=1;
        while(ans<=n){
            if(ans==n)return true;
            ans*=3;
        }
        return false;
    }
};