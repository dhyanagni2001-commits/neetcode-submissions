class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(const string& p: tokens){
            if(p== "+"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(a+b);
            }else if(p== "-"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b-a);
            }else if(p=="*"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(a*b);
            }else if(p=="/"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b/a);
            }else{
                s.push(stoi(p));
            }
        }
        return s.top();
    }
};
