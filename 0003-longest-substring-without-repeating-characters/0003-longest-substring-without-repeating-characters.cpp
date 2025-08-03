class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>mp;

        int j=0,ans=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp[s[i]]>1){
                mp[s[j++]]--;
            }
            ans = max(ans , (i-j+1));
        }
        return ans;
    }
};