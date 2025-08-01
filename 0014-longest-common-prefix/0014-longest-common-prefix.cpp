class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(),s.end());
        string ans="";
        for(int i=0;i<s[0].size();i++){
            char y = s[0][i];
            for(auto x:s){
                if(x[i]!= y)return ans;
            }
            ans+=y;
        }
        return ans;

    }
};