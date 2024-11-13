class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string temp;
        vector<string> words;

        // Split the input string `s` by spaces
        while (ss >> temp) {
            words.push_back(temp);
        }

        // Check if pattern length matches the number of words
        if (words.size() != pattern.size()) {
            // cout << "Pattern length does not match number of words." << endl;
            return false;
        }

        map<string, char> mp;
        set<char> st;

        for (int i = 0; i < words.size(); i++) {
            // If the word is not in the map, add it with the corresponding pattern character
            if (mp.find(words[i]) == mp.end() && st.find(pattern[i]) == st.end() ) {
                mp[words[i]] = pattern[i];
                st.insert(pattern[i]);
            } 
            else if(mp[words[i]] != pattern[i] ) 
            {
                return false;
            }
        }

        return true;





    }
};