class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto x:tokens){
            char op= (x.size()==1)?x[0]:x[1];
            int a,b;
            switch(op){
                case '+':
                    a = st.top();
                    st.pop();
                    b= st.top();
                    st.pop();
                    st.push(a+b);
                    break;
                case '-':
                    a = st.top();
                    st.pop();
                    b= st.top();
                    st.pop();
                    st.push(b-a);
                    break;
                case '*':
                    a = st.top();
                    st.pop();
                    b= st.top();
                    st.pop();
                    st.push(a*b);
                    break;
                case '/':
                    a = st.top();
                    st.pop();
                    b= st.top();
                    st.pop();
                    st.push(b/a);
                    break;
                default:
                    st.push(stoi(x));
                    break;
            }
            
        }
        return st.top();
    }
};