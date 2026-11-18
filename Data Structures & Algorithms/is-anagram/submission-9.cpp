class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<int,int> mpp;

        for(char c: s){
            mpp[c - 'a']++;
        }
        for(char c: t){
            mpp[c - 'a']--;
        }
        
        for(auto a:mpp){
            if (a.second!=0){
                return false;
            }
        }
        return true;
    }
};
