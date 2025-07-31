class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
    unordered_set<int> prev,ans;       
    for (int num : arr) {
        unordered_set<int> cur;
        cur.insert(num);
        for (int x : prev) {
            cur.insert(x | num);
        }
        ans.insert(cur.begin(),cur.end());
        prev = cur;
    }

    return ans.size();
}
};