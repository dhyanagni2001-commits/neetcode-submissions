class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        int n = nums.size();
        int z = n/3;
        vector<int> ans;
        for(auto&[nums,count]:mp){
            if(count > z){
                ans.push_back(nums);
            }
        }
        return ans;
    }
};