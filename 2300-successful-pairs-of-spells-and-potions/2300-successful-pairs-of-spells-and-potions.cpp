class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long t) {
        sort(p.begin(),p.end());
        for(int i=0;i<s.size();i++){
            s[i]=help(p,s[i],t);
        }
        return s;
    }
    int help(vector<int>& p,long long x,int target){
        int n = p.size();
        int low = 0, high = n - 1, ans = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long val = x * p[mid];

            if (val >= target) {
                ans = mid;       
                high = mid - 1;  
            } else {
                low = mid + 1;
            }
        }

        return n-ans;
    }
};