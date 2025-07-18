class Solution {
public:
    
    long long minimumDifference(vector<int>& nums) {
        int n=nums.size();
        int m=n/3;
        vector<long long>leftsum(n),rightsum(n);
        priority_queue<int>maxHeap;
        priority_queue<int, vector<int>, greater<int>> minHeap;
        long long sumleft=0,sumRight=0;
        for(int i=0;i<n;i++){
            sumleft+=nums[i];
            sumRight+=nums[n-i-1];
            maxHeap.push(nums[i]);
            minHeap.push(nums[n-i-1]);
            while(minHeap.size()>m){
                sumRight-=minHeap.top();
                minHeap.pop();
            }
            while(maxHeap.size()>m){
                sumleft-=maxHeap.top();
                maxHeap.pop();
            }
            leftsum[i]=sumleft;
            rightsum[n-i-1]=sumRight;
        }
        long long ans=INT_MAX;
        for(int i=m;i<=n-m;i++){
            ans=min(ans,leftsum[i-1]-rightsum[i]);
        }
        return ans;
    }
};