class Solution {
public:
    bool isIsometric(string& str1, string& str2) {
        if (str1.length() != str2.length())
            return false;

        vector<int> arr(150, INT_MAX);
        // in str1 pov
        for (int i = 0; i < str1.length(); i++)
        {
            int index = int(str1[i]);
            if (arr[index] == INT_MAX)
            {
                arr[index] = str1[i] - str2[i];
            }
            else if (arr[index] != str1[i] - str2[i])
                return false;
        }

        // in str2 pov
        for (int i = 0; i < 150; i++)
            arr[i] = INT_MAX;

        for (int i = 0; i < str2.length(); i++)
        {
            int index = int(str2[i]);

            if (arr[index] == INT_MAX)
                arr[index] = str2[i] - str1[i];
            else if (arr[index] != str2[i] - str1[i])
                return false;
        }

        return true;
}
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
       
       vector<string> ans;
       
       for(int i=0; i<words.size(); i++) {
            if(words[i].size() != pattern.size()) continue;

            bool val =  isIsometric(pattern, words[i]);
            if(val) {
                ans.push_back(words[i]);
            }
       } 

       return ans;
    }
};