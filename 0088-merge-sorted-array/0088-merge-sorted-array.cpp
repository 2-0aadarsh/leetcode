class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0, k=0;
        vector<int> ans(m+n);
        while(i<m && j<n) {
            if(nums1[i] < nums2[j]){
                ans[k++] = nums1[i++];
            } else {
                ans[k++] = nums2[j++];
            }
        }

        // remaining elements if in nums1
        while(i<m){
            ans[k++] = nums1[i++];
        }

        // remaining elements if in nums2
        while(j<n) {
            ans[k++] = nums2[j++];
        }

        // change the order now for the nums1
        for(int i=0; i<(m+n); i++){
            nums1[i] = ans[i];
        }

    } 
};