public class Solution {
    public IList<string> RemoveAnagrams(string[] w) {
        string[] x = w.ToArray();
        int n = w.Length;
        int[] dp = new int [n];
        char[] arr = x[0].ToCharArray();
        Array.Sort(arr);
        x[0] = new string(arr);
        for(int i=1;i<n;i++){
            arr = x[i].ToCharArray();
            Array.Sort(arr);
            x[i] = new string(arr);
            if(x[i]==x[i-1])dp[i]=1;
        }
        IList<string> ans =new List<string>();
        for(int i=0;i<n;i++){
            if(dp[i]==0) ans.Add(w[i]);
        }
        return ans;
    }
}