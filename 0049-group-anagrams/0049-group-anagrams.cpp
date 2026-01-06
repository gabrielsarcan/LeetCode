class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> grupos;

        for (string s : strs) {
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }

            string key = "";
            for (int i = 0; i < 26; i++) {
                key += "#";
                key += to_string(count[i]);
            }
            grupos[key].push_back(s);
        }

        vector<vector<string>> resultado;
        for (pair<const string, vector<string>> it : grupos) {
            resultado.push_back(it.second);
        }

        return resultado;
    }
};