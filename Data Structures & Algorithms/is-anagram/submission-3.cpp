class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> mp;
        for(char p:s){
            mp[p-'a']++;
        }
        for(char p:t){
            mp[p-'a']--;
        }
        for(auto s:mp){
            if(s.second!=0){
                return false;
            }
        }
        return true;
        
    }
};
