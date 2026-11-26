class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int a:nums){
            mp[a]++;

        }
        int n = nums.size();
        for(auto [num,count]:mp){
            if(count>n/2){
                return num;
            }
        }
        return{};
    }
};