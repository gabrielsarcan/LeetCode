class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length() ){
            return false;
        }
        unordered_map<char, int> novoS;
        unordered_map<char, int> novoT;
        
        for (int i = 0; i < s.length(); i++){
            novoS[s[i]] += 1;
            novoT[t[i]] += 1;
        }
        return novoS == novoT;
    }
};