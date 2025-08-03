class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxFreq = 0, left = 0, res = 0;
        vector<int> hash(26, 0);

        for (int right = 0; right < s.size(); right++) {

            hash[s[right] - 'A']++;
            maxFreq = max(maxFreq, hash[s[right] - 'A']);

            if ((right - left + 1) - maxFreq > k) {
                hash[s[left] - 'A']--;
                left++;
            }
            res = max(res, right - left + 1);
        }
        return res;
    }
};