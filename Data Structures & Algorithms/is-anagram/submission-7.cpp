class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }

        unordered_map<char,int> mpp;

        for(char a:s){
            mpp[a]++;
        }
        for(char b:t){
            mpp[b]--;
        }

        for(auto c:mpp){
            if(c.second!=0){
                return false; 
            }
        }
        return true;
    }
};
