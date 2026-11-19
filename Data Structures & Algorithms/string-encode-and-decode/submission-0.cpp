class Solution {
public:

    string encode(vector<string>& strs) {
        string wynik = "";
        for(int i = 0; i < strs.size(); i++){
            const string& s = strs[i];
            wynik += to_string(s.size()) + "#" + s;
        }
        return wynik;
    }

    vector<string> decode(string s) {
        vector<string> wynik;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int ilosc = stoi(s.substr(i, j - i));
            wynik.push_back(s.substr(j + 1, ilosc));
            i = j + 1 + ilosc;
        }
        return wynik;
    }
};
