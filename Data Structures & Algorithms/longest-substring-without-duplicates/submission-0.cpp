class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> okno;
        int l = 0; int wynik = 0;
        for(int r = 0;r < s.size(); r++){
            while(okno.count(s[r])){
                okno.erase(s[l]); 
                l++;
            }
            okno.insert(s[r]);
            wynik = max(wynik, r - l + 1);
        }
        return wynik;
    }
};
