class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, int> mp;
        for(char p : s){
            mp[p - 'a']++;
        }
        for(char p : t){
            mp[p - 'a']--;
        }

        for(auto &p:mp){
            if(p.second>0){
                return false;
            }
        }
        return true;
    }
};
