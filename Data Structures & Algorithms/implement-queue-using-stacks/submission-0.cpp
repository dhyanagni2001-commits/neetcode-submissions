class MyQueue {
private:
stack <int> s;
stack <int> s1;
public:

    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
        
    }
    
    int pop() {
        if(s1.empty()){
            while(!s.empty()){
            int p = s.top();
            s1.push(p);
            s.pop();
            }
        }
        int n = s1.top();
        s1.pop();
        return n;
    }
    
    int peek() {
        if(s1.empty()){
            while(!s.empty()){
                int n=s.top();
                s1.push(n);
                s.pop();
            }
        }
        return s1.top();
    }
    
    bool empty() {
        return s.empty()&& s1.empty();
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