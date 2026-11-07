class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mpp;
        for(int a:nums){
            if(mpp.contains(a)){
                return true;
            }
            mpp.insert(a);
        }
        return false;
    }
};