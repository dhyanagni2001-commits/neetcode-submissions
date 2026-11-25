class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int a : nums){
            mp[a]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto [num,count]:mp){
            bucket[count].push_back(num);
        }
        vector<int> ans;
        for(int i=nums.size();i>=0;i--){
            for(int s : bucket[i]){
                ans.push_back(s);
            }
            if(ans.size()==k){
                return ans;
            }
        }
        return {};
    }
};
