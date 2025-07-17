class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        
        for (string curr : strs) {
            string sortedCurr = curr;
            sort(sortedCurr.begin(), sortedCurr.end());  // Sort the string
            mpp[sortedCurr].push_back(curr);             // Group by sorted key
        }

        vector<vector<string>> ans;
        for (auto& entry : mpp) {
            ans.push_back(entry.second); // Collect all anagram groups
        }

        return ans;
    }
};