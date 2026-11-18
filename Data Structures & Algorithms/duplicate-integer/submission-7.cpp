class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mp;

        for(int n:nums){
            if(mp.contains(n)){
                return  true;
            }
            mp.insert(n);
        }
        return false;
    }
};