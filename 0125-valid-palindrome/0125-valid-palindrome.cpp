class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(auto x:s){
            x= tolower(x);
            if(isalnum(x)){
                a+=x;
            }
        }
        cout<<a;
        int i=0,j=a.size()-1;
        while(i<j){
            if(a[i++]!=a[j--])return 0;
        }
        return 1;
    }
};