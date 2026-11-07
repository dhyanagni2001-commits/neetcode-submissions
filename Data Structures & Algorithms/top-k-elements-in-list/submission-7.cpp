class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int a:nums){
            mpp[a]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto& [num,count]:mpp){
            bucket[count].push_back(num);
        }
        vector<int> ans;
        for(int i=nums.size();i>=0;i--){
            for(int a:bucket[i]){
                ans.push_back(a);
            }
            if(ans.size()==k){
                return ans;
            }
        }
        return{};
    }
};
