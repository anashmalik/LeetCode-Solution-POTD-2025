class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(auto x:s){
            if(x==')'){
                if(st.top()!= '(')return 0;
                st.pop();
            }
            else if (x==']'){
                if(st.top()!= '[')return 0;
                st.pop();   
            }
            else if (x=='}'){
               if(st.top()!= '{')return 0;
                st.pop();
            }
            else{
                st.push(x);
            }
        }
        return st.size()==0;
    }
};