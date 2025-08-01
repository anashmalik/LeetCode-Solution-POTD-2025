class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return 0;
        vector<int>a(26,0);
        for(auto x:s)a[x-'a']++;
        for(auto x:t){
            a[x-'a']--;
            if(a[x-'a']<0)return 0;
        }
        return true;
    }
};