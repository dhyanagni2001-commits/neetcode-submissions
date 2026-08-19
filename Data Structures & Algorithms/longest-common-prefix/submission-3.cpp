class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans ="";
        if(strs.empty()){
            return "";
        }
        for(int i=0;i<strs[0].size();i++){
            char word = strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(i>=strs[j].size()||strs[j][i]!=word){
                    return ans;
                }
            }
            ans = ans + word;
        }
        return ans;
        
    }
};