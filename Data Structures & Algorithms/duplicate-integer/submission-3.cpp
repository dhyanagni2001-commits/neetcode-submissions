class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(int a:nums){
            ans[a]++;
            
        }
        
        for(auto &p:ans){
            if(p.second>1){
                return true;
            }
        }
        return false;

    }
};