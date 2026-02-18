#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;

        for (int i = 0; i < strs.size(); i++) {
            string key = strs[i];          // copy string
            sort(key.begin(), key.end());  // sort characters
            mp[key].push_back(strs[i]);    // group anagrams
        }

        vector<vector<string>> result;

        for (auto it : mp) {
            result.push_back(it.second);
        }

        return result;
    }
};
