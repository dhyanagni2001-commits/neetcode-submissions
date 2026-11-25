class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans(n,1);

        //Moving from left to right, having product of all those, prefix

        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        //moving from right to left, Postfix
        int postfix = 1;
        for(int i=n-1;i>=0;i--){
            ans[i]=ans[i]*postfix;
            postfix=postfix*nums[i];
        }
        return ans;
    }
};
