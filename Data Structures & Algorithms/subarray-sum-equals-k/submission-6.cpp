class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int result = 0;
        int currSum = 0;
        unordered_map<int,int> mp;
        mp[0]=1;

        for(int n : nums){
            currSum += n;
            int diff = currSum - k;
            result = result + mp[diff];
            mp[currSum]++;
        }
        return result;
    }
};