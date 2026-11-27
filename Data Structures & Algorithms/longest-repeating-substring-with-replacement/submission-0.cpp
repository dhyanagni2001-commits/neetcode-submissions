class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int maxlen=0;
        int maxfre=0;
        unordered_map<char,int> mp;
        while(r<s.size()){
            mp[s[r]]++;
            maxfre=max(maxfre,mp[s[r]]);

            while((r-l+1)-maxfre>k){
                mp[s[l]]--;
                l++;
            }
            maxlen = max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};
