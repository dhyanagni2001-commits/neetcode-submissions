class Solution {
public:
    void sortColors(vector<int>& nums) {
        int num1 = 0;
        int num2 = 0;
        int num3 = 0;
        for(int n : nums){
            if(n==0){
                num1++;
            }else if(n==1){
                num2++;
            }else{
                num3++;
            }
        }
        for(int i=0;i<num1;i++){
            nums[i]=0;
        }
        for(int i=num1;i<num1+num2;i++){
            nums[i]=1;
        }
        for(int i=num1+num2;i<num1+num2+num3;i++){
            nums[i]=2;
        }
        

    }
};