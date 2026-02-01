class MyQueue {
public:
    stack<int>m,b;
    MyQueue() {
        
    }
    
    void push(int x) {
        m.push(x);
    }
    
    int pop() {
        while(!m.empty()){
            b.push(m.top());
            m.pop();
        }
        int x=b.top();
        b.pop();
        while(!b.empty()){
            m.push(b.top());
            b.pop();
        }
        return x;
        
    }
    
    int peek() {
        while(!m.empty()){
            b.push(m.top());
            m.pop();
        }
        int x=b.top();
        while(!b.empty()){
            m.push(b.top());
            b.pop();
        }
        return x;        
    }
    
    bool empty() {
        return m.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */