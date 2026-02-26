class Solution {
public:
    int numSteps(string s) {
        int number=0,ans=0,n=s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                number+= pow(2,n-i-1);
            }
        }
        // cout<<number<<endl;
        while(number!=1){
            if(number%2==0){
                number/=2;
            }
            else{
                number++;
            }
            ans++;
        }
        return ans;
    }
};