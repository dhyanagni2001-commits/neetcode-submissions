class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int l = 0;
        int r = 1;
        int profit = 0;
        while(r<nums.size()){
            if(nums[l]<nums[r]){
                int num = nums[r] - nums[l];
                profit = max(profit,num);
            }else{
                l=r;
            }
            r++;
        }
        return profit;
    }
};
