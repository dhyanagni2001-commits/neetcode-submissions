class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // for(int num:nums){
        //     mp[num]++;
        // }
        // int n = nums.size();
        // int z = n/3;
        // vector<int> ans;
        // for(auto&[nums,count]:mp){
        //     if(count > z){
        //         ans.push_back(nums);
        //     }
        // }
        // return ans;

        int num1=-1;
        int num2=-1;
        int count1=0;
        int count2=0;
        for(int num:nums){
            if(num1==num){
                count1++;
            }else if(num2==num){
                count2++;
            }else if(count1==0){
                num1=num;
                count1=1;
            }else if(count2==0){
                num2=num;
                count2=1;
            }else{
                count1--;
                count2--;
            }
        }

        count1=count2=0;
        for(int num: nums){
            if(num == num1){
                count1++;
            }else if(num == num2){
                count2++;
            }
        }

        vector<int> res;
        int n=nums.size();
        int z=n/3;
        if(count1>z){
            res.push_back(num1);
        }
        if(count2>z){
            res.push_back(num2);
        }
        return res;
    }
};