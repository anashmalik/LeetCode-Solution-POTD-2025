public class Solution {
    public int[] SuccessfulPairs(int[] s, int[] po, long t) {
        Array.Sort(po);
        for(int i=0;i<s.Length;i++){
            int x=s[i],ans=po.Length;
            int st=0,en=po.Length-1;
            while(st<=en){
                int m= (st+en)/2;
                long y = (long)x * po[m];
                if(y>=t){
                    ans=m;
                    en=m-1;
                }
                else{
                    st=m+1;
                }
            }
            s[i]= po.Length - ans;
        }
        return s;
        
    }
}