class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> zbior(nums.begin(), nums.end());
        int najdluzszy = 0;
        for(auto liczba : zbior){
            if(!zbior.count(liczba - 1)){
                int aktualna_liczba = liczba;
                int dlugosc = 1;
                while(zbior.count(aktualna_liczba + 1)){
                    aktualna_liczba++;
                    dlugosc++;
                }
                najdluzszy = max(dlugosc, najdluzszy);
           }
            
        }
        return najdluzszy;
    }
};
