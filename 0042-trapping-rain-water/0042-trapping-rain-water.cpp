class Solution {
public:
    vector<int> leftmax(vector<int>& arr) {
        vector<int> ans(arr.size());
        ans[0] = arr[0];

        for (int i = 1; i < arr.size(); i++)
        {
            ans[i] = max(ans[i-1],arr[i]);
        }
        return ans;
    }

    vector<int> rightmax(vector<int>& arr) {
        vector<int> ans(arr.size());
        ans[arr.size()-1] = arr[arr.size()-1];

        for (int i = arr.size()-2; i>=0; i--)
        {
            ans[i] = max(arr[i], ans[i+1]);
        }
        return ans;
    }

    int trap(vector<int>& height) {
        vector<int> lmax = leftmax(height);
        vector<int> rmax = rightmax(height);

        int area = 0;
        for(int i=0; i<height.size(); i++) {
            area += min(lmax[i], rmax[i])-height[i];
        }

        return area;
    }
};