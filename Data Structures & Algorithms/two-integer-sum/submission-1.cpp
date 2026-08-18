class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int curr = nums[i];
            int diff= target - curr;
            if(mp.find(diff)!=mp.end()){
                return {mp[diff],i};
            }
            mp[curr] = i;
        } 
        return {};
    }
};
