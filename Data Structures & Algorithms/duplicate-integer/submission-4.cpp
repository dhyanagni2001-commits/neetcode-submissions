class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mp;
        for(int s:nums){
            if(mp.contains(s)){
                return true;
            }
            mp.insert(s);
        }

        return false;
    }
};