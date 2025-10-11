using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    Dictionary<int, int> mp = new Dictionary<int, int>();

    public long MaximumTotalDamage(int[] power)
    {
        List<int> s = new List<int>();

        // Count frequency of each element
        foreach (int x in power)
        {
            if (!mp.ContainsKey(x))
                mp[x] = 0;
            mp[x]++;

            if (mp[x] == 1)
                s.Add(x);
        }

        s.Sort();

        long[] dp = Enumerable.Repeat(-1L, s.Count).ToArray();
        return Help(s, 0, dp);
    }

    private long Help(List<int> s, int i, long[] dp)
    {
        if (i >= s.Count) return 0;
        if (dp[i] != -1) return dp[i];

        long ans = Help(s, i + 1, dp);

        long t = mp[s[i]];
        long v = s[i];
        int k = i;

        while (i < s.Count && s[i] <= v + 2)
            i++;

        ans = Math.Max(ans, Help(s, i, dp) + (t * v));

        return dp[k] = ans;
    }
}
