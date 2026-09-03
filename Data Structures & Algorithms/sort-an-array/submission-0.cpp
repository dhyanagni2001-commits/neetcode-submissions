class Solution {
private:
    void sort(vector<int>& nums, int left, int right){
        if(left>=right){
            return;
        }
        int mid = left + (right - left)/2;
        sort(nums, left, mid);
        sort(nums, mid+1, right);
        merge(nums, left, mid, right);
    }
    void merge(vector<int>& nums, int left, int mid, int right){
        int i = left;
        int j = mid+1;

        while(i<=mid && j<=right){
            if(nums[i]<=nums[j]){
                i++;
            }
            else{
                int value = nums[j];
                int index = j;
                while(index>i){
                    nums[index]=nums[index-1];
                    index--;
                }
                nums[i] = value;
                i++;
                mid++;
                j++;
            }
        }

    }
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums, 0, nums.size()-1);
        return nums;
        
    }

};