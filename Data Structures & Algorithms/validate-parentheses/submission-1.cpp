class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        

        for(char l:s){
            if(l=='(' || l=='{' || l=='['){
                p.push(l);
            }else{
                if(p.empty()){
                    return false;
                }

                if((l==')' && p.top()!='(') || (l==']' && p.top()!='[') || (l== '}' && p.top()!='{')){
                    return false;
                }
                p.pop();
            }
        }
        return p.empty();
    }
};
