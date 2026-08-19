class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>>value;

        for(auto s:strs){
            string key = s;
            sort(key.begin(),key.end());
            value[key].push_back(s);
        }

        for(auto s:value){
            ans.push_back(s.second);
        }
        return ans;
    }
};
