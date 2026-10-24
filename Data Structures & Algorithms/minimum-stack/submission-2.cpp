class MinStack {
public:
    stack <int> s;
    stack <int> s1;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        int min1;
        if(s1.empty()){
            min1 = val;
        }else{
            min1 = min(val, s1.top());
        }
        
        
        s1.push(min1);
    }
    
    void pop() {
        s.pop();
        s1.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
       return s1.top();
    }
};
