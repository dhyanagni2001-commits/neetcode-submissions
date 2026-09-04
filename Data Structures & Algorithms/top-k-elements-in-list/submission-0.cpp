class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int &p : nums){
            mpp[p]++;
        }
        vector<vector<int>> buckets(nums.size()+1);
        for(auto &[num, count]: mpp){
            buckets[count].push_back(num);
        }
        vector<int> ans;
        for(int i=nums.size() ;i>0;i--){
            for(auto s:buckets[i]){
                ans.push_back(s);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return{};
    }
};
