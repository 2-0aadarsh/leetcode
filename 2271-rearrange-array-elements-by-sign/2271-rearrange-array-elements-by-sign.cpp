class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for(int i = 0; i< nums.size(); i++) {
            if(nums[i]>0) pos.push_back(nums[i]);
            if(nums[i]<0) neg.push_back(nums[i]);
        }
        int j = 0;
        for(int i=0; i<nums.size(); i=i+2){
            nums[i] = pos[j];
            j++;
        }

        int k = 0;
        for(int i=1; i<nums.size(); i=i+2){
            nums[i] = neg[k];
            k++;
        }

        return nums;
    }
};