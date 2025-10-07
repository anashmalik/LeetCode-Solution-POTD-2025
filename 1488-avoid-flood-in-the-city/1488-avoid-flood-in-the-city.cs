public class Solution {
    public int[] AvoidFlood(int[] rains) {
        int n = rains.Length;
        int[] ans= new int[n];
        Array.Fill(ans,1);

        var full = new Dictionary<int,int>();
        var DryDaylake = new SortedSet<int>(); 
        
        for(int i=0;i<n;i++){
            if(rains[i]==0){
                DryDaylake.Add(i);
            }
            else{
                ans[i]=-1;
                if(full.ContainsKey(rains[i])){
                    int last = full[rains[i]];
                    int? dryday =null;
                    foreach(int d in DryDaylake){
                        if(d>last){
                            dryday=d;
                            break;
                        }
                    }
                    if(dryday==null) return new int[0];
                    ans[dryday.Value]=rains[i];
                    DryDaylake.Remove(dryday.Value);
                }
                    full[rains[i]]=i;
            }
        }
        return ans;
    }
}