class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> grupy;
        for(int i = 0; i < strs.size(); i++){
            string klucz = strs[i];
            sort(klucz.begin(), klucz.end());
            grupy[klucz].push_back(strs[i]);
        }
        vector<vector<string>> wynik;
        for(auto& sl : grupy){
            wynik.push_back(sl.second);
        }
        return wynik;
    }
};
