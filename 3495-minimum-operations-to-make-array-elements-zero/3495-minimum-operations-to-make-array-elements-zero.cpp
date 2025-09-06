class Solution {
public:
    long long prefixHeight(long long n) {
    if (n <= 0) return 0;
    long long sum = 0;
    long long base = 1;
    long long height = 1;
    while (base * 4 <= n) {
        sum += (base * 4 - base) * height; // full block contribution
        base *= 4;
        height++;
    }
    sum += (n - base + 1) * height; // last partial block
    return sum;
}

long long minOperations(vector<vector<int>>& queries) {
    long long ans = 0;
    for (auto &q : queries) {
        long long l = q[0], r = q[1];
        long long total = prefixHeight(r) - prefixHeight(l - 1);
        ans += (total + 1) / 2; // ceil(total/2)
    }
    return ans;
}

};