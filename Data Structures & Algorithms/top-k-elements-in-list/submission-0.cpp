class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> licznik;
        for(int l : nums){
            licznik[l]++;
        }
        vector<pair<int,int>> pary;
        for(auto& para : licznik){
            pary.push_back({para.second, para.first});
        }
        sort(pary.rbegin(), pary.rend());
        vector<int> wynik;
        for(int i = 0; i < k; i++){
            wynik.push_back(pary[i].second);
        }
        return wynik;
    }
};
