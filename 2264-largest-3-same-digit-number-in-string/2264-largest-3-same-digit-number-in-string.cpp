class Solution {
public:
    string largestGoodInteger(string num) {
        char a='0'-1;
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1]&&num[i+1]==num[i+2]){
                if(num[i]>a)a=num[i];
            }
        }
        string s="";
        if(a!='0'-1){s+=a;
        s+=a;
        s+=a;}
        else return "";
        return s;
        
    }
};