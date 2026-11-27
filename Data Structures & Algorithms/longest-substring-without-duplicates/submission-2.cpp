class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> mp;
        int l =0;
        int r=0;
        int count=0;
        while(r<s.size()){
            if(mp.count(s[r])){
                l = max(l,mp[s[r]]+1);// make logic, chnages are only made when window is moving forward and not looking behind.
            }
            mp[s[r]]=r;
            count=max(count,r-l+1);//make sure you count after adding the element and removing repeated one
            r++;
        }
        return count;
    }
};
