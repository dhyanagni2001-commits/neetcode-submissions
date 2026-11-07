class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for (auto& [num,count]:mpp){
            bucket[count].push_back(num);
        }
        vector<int> ans;
        for(int i=nums.size();i>=0&&ans.size()<=k;i-- ){
            for(int num:bucket[i]){
                ans.push_back(num);
            }
            if(ans.size()==k){
                return ans;
            }
        }
        return {};
    }
};
