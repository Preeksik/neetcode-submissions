class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> zlicz(26, 0);
        int l = 0; int wynik = 0;
        int max_f = 0;
        for(int r = 0; r < s.size(); r++){
            zlicz[s[r] - 'A']++;
            max_f = max(max_f, zlicz[s[r] - 'A']);
            while((r - l + 1) - max_f > k){
                zlicz[s[l] - 'A']--;
                l++;
            }
            wynik = max(wynik, r - l + 1);
        }
        return wynik;
    }
};
