class Solution {
public:
    bool reorderedPowerOf2(int n) {
        if(n<=2)return 1;
        unordered_map<int,int>mp;
        while(n){
            if(n%10){
                mp[n%10]++;
            }
            n/=10;
        }
        long long ans =2;
        while(ans<=1000000000){
            ans*=2;
            unordered_map<int,int>x;
            auto s=ans;
            while(s){
                if(s%10){
                    x[s%10]++;
                }
                s/=10;
            }
            if(x==mp)return 1;
        }
        return 0;
    }
};