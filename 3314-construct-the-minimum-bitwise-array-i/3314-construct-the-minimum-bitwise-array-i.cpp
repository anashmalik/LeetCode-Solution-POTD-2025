class Solution {
public:
    static unordered_map<int,int> build() {
        unordered_map<int,int> mp;
        for (int i = 1; i <= 1000; i++) {
            int val = i | (i + 1);
            if (!mp.count(val)) {
                mp[val] = i; // keep smallest i
            }
        }
        return mp;
    }

    vector<int> minBitwiseArray(vector<int>& nums) {
        static unordered_map<int,int> mp = build();
        vector<int> ans;

        for (int x : nums) {
            if (mp.count(x))
                ans.push_back(mp[x]);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};
