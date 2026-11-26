class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = m-1;
        int b = n-1;
        int c = nums1.size()-1;
        while(b>=0){
            if(a>=0&&nums1[a]>=nums2[b]){
                nums1[c]=nums1[a];
                c--;
                a--;
            }else{  // checking a>=0 is we important becuase a can become 0 and there can be element left in num2, there will error.
                nums1[c]=nums2[b];
                c--;
                b--;
            }
        }
    }
};