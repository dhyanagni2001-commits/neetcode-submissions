class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int currsum=0;
        unordered_map<int,int> prefix;
        prefix[0]=1;
        int result = 0;
        for(int num : nums){
            currsum += num;
            int diff = currsum - k;
            result += prefix[diff];
            prefix[currsum]++;
        }
        return result;
    }
};