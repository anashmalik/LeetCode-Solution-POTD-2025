class Solution {
public:
    int minOperations(string s, int k) {
        int z = 0, n = s.size();
        for (auto x : s)
            if (x == '0') z++;

        if (z == 0) return 0;
        if (n == k) return ((z == n) << 1) - 1;

        int base = n - k;

        int o = max(
            (z + k - 1) / k,
            ((n - z) + base - 1) / base
        );

        o += ~o & 1;   // make odd

        int e = max(
            (z + k - 1) / k,
            (z + base - 1) / base
        );

        e += e & 1;    // make even

        int res = INT_MAX;

        if ((k & 1) == (z & 1))
            res = min(res, o);

        if (~z & 1)
            res = min(res, e);

        return (res == INT_MAX) ? -1 : res;
    }
};