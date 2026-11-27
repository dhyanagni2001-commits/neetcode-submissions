class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int l = 0;
        
        int maz= 0;
        for(int r =1;r<nums.size();r++){
            if(nums[l]<nums[r]){
                int pro = nums[r]-nums[l];
                maz = max(maz,pro);
            }else{
                l = r;
            }
        }
        return maz;
    }
};
