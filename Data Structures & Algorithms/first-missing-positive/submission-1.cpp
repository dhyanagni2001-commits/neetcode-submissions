class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        while(i<n){
            if(nums[i]>n || nums[i]<=0){
                i++;
                continue;
            }
            int index = nums[i]-1;
            if(nums[i]!=nums[index]){
                swap(nums[index],nums[i]);
            }else{
                i++;
            }

            
        }

         for(int i=0;i<n;i++ ){
            if(nums[i]!=i+1){
                return i+1;
            }
        }
        return n+1;

       
    }
};