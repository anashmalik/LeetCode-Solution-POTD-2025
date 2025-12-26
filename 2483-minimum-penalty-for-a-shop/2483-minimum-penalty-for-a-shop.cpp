class Solution {
public:
    int bestClosingTime(string c) {
        int n= count(c.begin(),c.end(),'Y');
        int p=n,cl=0;
        int ans=0;

        for(int i=0;i<c.size();i++){
            if(c[i]=='Y')n--;
            else{
                cl++;
            }
            if(cl+n<p){
                p=cl+n;
                ans=i+1;
            }

        }
        return ans;
        
    }
};