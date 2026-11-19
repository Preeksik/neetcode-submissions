class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> licznik1;
        unordered_map<char, int> licznik2;
        for(auto s1 : s){
            licznik1[s1]++;
        }
        for(auto s2 : t){
            licznik2[s2]++;
        }
        if(licznik1 == licznik2){
            return true;
        }
        return false;

    }
};
