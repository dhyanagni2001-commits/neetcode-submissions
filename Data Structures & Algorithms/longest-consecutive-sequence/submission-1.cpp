class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp(nums.begin(),nums.end());
        int lo = 0;

        for(int num:mp){
            if(mp.find(num-1)==mp.end()){
               int len = 1;
                    while(mp.find(num+len)!=mp.end()){
                        len++;
                    }
                lo = max(lo,len);
            }
            
        }
        return lo;
    }
};
