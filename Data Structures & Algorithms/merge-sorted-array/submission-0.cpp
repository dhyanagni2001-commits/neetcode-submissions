class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = m - 1;
        int r = nums1.size() - 1;
        int r2 = n-1;

        while(r2 >= 0){
            if(l>=0 && nums1[l]>=nums2[r2]){
                nums1[r]=nums1[l];
                l--;
                r--;
            }else {
                nums1[r]=nums2[r2];
                r2--;
                r--;
            }
            
        }
    }
};