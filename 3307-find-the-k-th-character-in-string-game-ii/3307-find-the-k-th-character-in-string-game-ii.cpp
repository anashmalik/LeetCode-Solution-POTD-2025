class Solution {
public:
    char kthCharacter(long long k, vector<int>& op) { 
        int c=op.size(),t=0;
        while(c--){
            long long a ;
            if(k>pow(2,c)){
                 t+=op[c];
                 k-=pow(2,c);
            }
        }
        cout<<t;
        t=t%26;
        return 'a'+t;


    }
};