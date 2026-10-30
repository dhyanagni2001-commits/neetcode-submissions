class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(s.size()!=t.size()){
            return false;
        }
        for(char p:s){
            mp[p]++;
        }
        for(char p:t){
            mp[p]--;
        }
        for(auto s:mp){
            if(s.second!=0){
                return false;
            }
        }
        return true;
        
    }
};
