class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int maxfreq=0;
        int maxleng=0;
        unordered_map<char,int> mp;
        while(r<s.size()){
            mp[s[r]]++;
            maxfreq = max(maxfreq, mp[s[r]]);

            while(r-l+1 - maxfreq > k){ //main logic where we find total length - maxfreq which should be less or equal to k. if its more than remove s[l]element do l++.
                mp[s[l]]--;
                l++;
            }
            maxleng = max(maxleng, r-l+1);
            r++;
        }
        return maxleng;
    }
};
