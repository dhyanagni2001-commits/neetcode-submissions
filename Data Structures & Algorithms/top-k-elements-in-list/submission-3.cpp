class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i: nums){
            mp[i]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto& [nums, count]:mp){
            bucket[count].push_back(nums);
        }
        vector<int> ans;
        for(int i = nums.size();i>=0;i--){
            for(auto j : bucket[i]){
            ans.push_back(j);
            }
            if(ans.size()==k){
                return ans;
            }
        }
        return {};
    }
};
