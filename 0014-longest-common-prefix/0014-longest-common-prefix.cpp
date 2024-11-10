class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans = "";
        int s = 0; int e = strs.size()-1;
        string first = strs[s];
        string last = strs[e];

        int firstSize = first.size();
        int lastSize = last.size();

        int index = 0;
        while(index < min(firstSize, lastSize) ){
            if(first[index] != last[index]) break;
            else {
                ans += first[index];
                index++;
            }
        }

        return ans;

    }
};