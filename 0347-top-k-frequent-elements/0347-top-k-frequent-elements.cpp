class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> ordenados;

        for (int n : nums){
            ordenados[n]++;
        }

        vector<pair<int, int>> frequencias;

        for (pair<int, int> it : ordenados){
            frequencias.push_back(it);
        }

        sort(frequencias.begin(), frequencias.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second;
        });

        vector<int> resultado;
        for (int i = 0; i < k; i++) {
            resultado.push_back(frequencias[i].first);
        }

        return resultado;
    }
};