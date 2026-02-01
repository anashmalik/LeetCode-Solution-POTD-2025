class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        make_heap(stones.begin(),stones.end());
        while(stones.size()>1){
            int x=stones[0];
            int y=stones[1];
            cout<<x<<" "<<y<<endl;
            pop_heap(stones.begin(),stones.end());
            stones.pop_back();
            pop_heap(stones.begin(),stones.end());
            stones.pop_back();
            if(x-y>0){
                stones.push_back(x-y);
                push_heap(stones.begin(),stones.end());                
            }
        }
        return (stones.size())?stones[0]:0;
    }
};