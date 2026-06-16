class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            int cur = nums[i];
            int diff = target - cur;
            if(mp.find(diff)!= mp.end()){
                return {mp[diff],i};
            }
            mp[cur]=i;

        }
        return {};
    }
};
