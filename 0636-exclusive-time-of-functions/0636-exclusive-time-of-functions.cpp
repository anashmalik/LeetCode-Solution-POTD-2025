class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        stack<vector<string>>st;
        map<string,int>mp;
        for(auto x:logs){
            stringstream ss(x);
            string token;
            vector<string>to;
            while(getline(ss,token,':')){
                to.push_back(token);
            }
            if(to[1]=="start"){
                st.push(to);
            }
            else{
                int time=0;
                while(st.top().size()==1){
                    time+= stoi( st.top()[0]);
                    st.pop();
                }
                auto srt = st.top();
                st.pop();
                int totaltime = stoi(to[2])-stoi(srt[2])+1;
                mp[to[0]]++;
                mp[to[0]]--;
                mp[to[0]]= mp[to[0]]+ (totaltime-time);
                st.push({to_string(totaltime)}); 
            }

        }
        vector<int>ans(mp.size(),0);
        for(auto [a,b]:mp) ans[stoi(a)]=b;

        return ans;
        
    }
};