class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        int res = 0;
        for(int s:nums){
            if(!mp[s]){
                mp[s]=mp[s-1]+1+mp[s+1];

                mp[s-mp[s-1]]=mp[s];
                mp[s+mp[s+1]]=mp[s];
                res=max(res,mp[s]);
            }
        }
        return res;
    }
};
