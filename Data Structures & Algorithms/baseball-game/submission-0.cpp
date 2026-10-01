class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> stack;
        int res = 0;

        for(const string& op: operations){
            if(op == "+"){
                int top = stack.top();
                stack.pop();
                int sum = top + stack.top();
                stack.push(top);
                stack.push(sum);
                res = res + sum;
            }else if(op == "C"){
                int top = stack.top();
                res = res - top;
                stack.pop();
                
            }else if(op == "D"){
                int top = stack.top();
                stack.push(top*2);
                res = res + top*2;
            }else{
                stack.push(stoi(op));
                res = res + stack.top();
            }
        }
        return res;
    }
};