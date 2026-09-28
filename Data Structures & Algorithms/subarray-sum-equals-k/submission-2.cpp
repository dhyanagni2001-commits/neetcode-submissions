class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cursum = 0;
        int res = 0;
        unordered_map<int,int> prefix;
        prefix[0]=1; //first position

        for (int a:nums){
            cursum = cursum + a;
            int diff = cursum - k;
            res = res + prefix[diff];
            prefix[cursum]++;
        }

        return res;
    }
};