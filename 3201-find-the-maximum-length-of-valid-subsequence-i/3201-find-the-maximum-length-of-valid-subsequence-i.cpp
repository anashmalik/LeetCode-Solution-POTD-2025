class Solution {
public:
    int maximumLength(vector<int>& nums) {
        for (int &x : nums) x %= 2; 
        int n = nums.size();
        int dp[2][2] = {};
        int ans = 0;

        for (int x : nums) {
            int new_dp[2][2] = {};

            // Option 1: start a new sequence with one element (no q yet)
            new_dp[x][0] = max(new_dp[x][0], 1);
            ans = max(ans, new_dp[x][0]);

            // Option 2: extend existing sequences
            for (int p = 0; p < 2; ++p) {
                for (int q = 0; q < 2; ++q) {
                    if (dp[p][q] > 0 && ((p + q) % 2 == (p + x) % 2)) {
                        new_dp[x][p] = max(new_dp[x][p], dp[p][q] + 1);
                        ans = max(ans, new_dp[x][p]);
                    }
                }
            }

            // Merge new_dp into dp
            for (int p = 0; p < 2; ++p)
                for (int q = 0; q < 2; ++q)
                    dp[p][q] = max(dp[p][q], new_dp[p][q]);
        }

        return max(ans,2);
    }
};
