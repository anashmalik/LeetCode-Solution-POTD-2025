class Solution {
public:
    int binaryGap(int n) {
        int c=0,ans=0,flag=1;
        while(n){
            if(n%2){
                if(flag){
                    flag=0;
                }
                else{
                    ans=max(ans,c);
                }
                c=1;
            }
            else{
                c++;
            }
            n/=2;
        }
        return ans;        
    }
};