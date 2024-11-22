class Solution {
public:
    
    int greatest(vector<int> arr, int start, int end, int target){
        int greatestIndex = -1;
        for(int i=start; i<=end; i++){
            if(arr[i]>target) {
                greatestIndex = i;
                break;
            }
        }
        return greatestIndex;
    }

    void nextPermutation(vector<int>& arr) {
        int pivotIndex = -1;
        int size = arr.size();

        // step-1 : find the pivot index (check the element who is not in decreasing order)
        for(int i=size-2; i>=0; i--){
            if(arr[i] < arr[i+1]){
                pivotIndex = i;
                break;
            }
        }
        cout<<"Pivot index is "<<pivotIndex<<endl;

        // step-2 : check pivot index is -1 as if it is -1 => array is sorted in decreasing order
        if(pivotIndex == -1) {
            int i=0; int j =size-1;
            while(i<j) {
                swap(arr[i++], arr[j--]);
            }
            return;
        }

        // step-3 : sort the elements after the pivot index as they're in decreasing order
        int i = pivotIndex+1; int j = size-1;
        while(i<j){
            swap(arr[i++], arr[j--]);
        }


        // step-4 : find the next greatest element after the element at pivotIndex
        int nextGreatest = greatest(arr,pivotIndex+1,size-1, arr[pivotIndex]);
        // cout<<"Next greatest element after pivotindex is at "<<nextGreatest<<endl; 

        // step-5 : swap at elements at pivotindex and at nextGreatest to get the next permutation
        swap(arr[pivotIndex], arr[nextGreatest]);
    }
};