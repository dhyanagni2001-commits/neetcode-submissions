class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<int,int> mp;
       int l=0;
       int r=0;
       int count = 0;
       while(r<s.size()){
        if(mp.count(s[r])){
            l = max(l,mp[s[r]]+1);// main logic because if l is ahead and that number is behind no use in ging back
            }
        mp[s[r]]=r;
        count = max(count, r-l+1);
        r++;

       }
       return count;
    }
};
