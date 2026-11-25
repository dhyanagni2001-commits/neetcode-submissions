class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int curr_Num = nums[i];
            int diff = target - curr_Num;
            if(mp.find(diff)!=mp.end()){
                return {mp[diff],i};
            }
            mp[curr_Num]=i;
        }
        return {};
    }
};
