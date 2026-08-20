class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int j = 0;
        for(int i =0;i<nums.size();i++){
            if(count == 0){
                count++;
                j = nums[i];
            }
            else if(j==nums[i]){
                count++;
            }else{
                count--;
            }
        }
        return j;
    }
};