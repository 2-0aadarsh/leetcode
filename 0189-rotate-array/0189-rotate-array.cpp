class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int n = nums.size();
        // k = k%n;
        // vector<int> temp;

        // for(int i=(n-k); i<n; i++){
        //     temp.push_back(nums[i]);
        // }

        // for(int i=0; i<=(n-k-1); i++) {
        //     temp.push_back(nums[i]);
        // }

        // for(int i=0; i<temp.size(); i++){
        //     nums[i] = temp[i];
        // }

        // method-2 in O(1) space
         int n = nums.size();
        k = k % n;  // Handle cases where k is greater than n
        
        // Step 1: Reverse the entire array
        reverse(nums.begin(), nums.end());
        
        // Step 2: Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Step 3: Reverse the remaining n - k elements
        reverse(nums.begin() + k, nums.end());

    }
};