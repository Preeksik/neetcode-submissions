class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty() or s.size() < t.size()) return "";
        unordered_map<char, int> cel;
        unordered_map<char, int> okno;
        int min_dlugosc = INT_MAX; int start_wyniku = 0;
        for(char c : t){
            cel[c]++;
        }
        int potrzebuje = cel.size(); int mam = 0;
        int l = 0;
        for(int r = 0; r < s.size(); r++){
            char c = s[r];
            okno[c]++;
            if(cel.count(c) and okno[c] == cel[c]){
                mam++;
            }
            while(mam == potrzebuje){
                if(r - l + 1 < min_dlugosc){
                    min_dlugosc = r - l + 1;
                    start_wyniku = l;
                }
                char lewy = s[l];
                okno[lewy]--;
                if(cel.count(lewy) and okno[lewy] < cel[lewy]) mam--;
                l++;
            }
            
        }
        return (min_dlugosc == INT_MAX) ? "" : s.substr(start_wyniku, min_dlugosc);
    }
};
