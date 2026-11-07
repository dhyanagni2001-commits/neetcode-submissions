class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> mpp;

       for(string a:strs){
        string k = a;
        sort(k.begin(),k.end());
        mpp[k].push_back(a);
       } 

       vector<vector<string>> ans;

       for(auto a:mpp){
        ans.push_back(a.second);
        }
       return ans;
    }
};
