class Solution {
public:
    int maxArea(vector<int>& heights) {
        int wynik = 0;
        int l = 0;
        int r = heights.size() - 1;
        int podstawa = 0;
        int wysokosc = 0;
        while(l < r){
            podstawa = r - l;
            wysokosc = min(heights[l], heights[r]);
            wynik = max(wynik, podstawa * wysokosc);
            if(heights[l] < heights[r]) l++;
            else r--;
        }
        return wynik;
    }
};
