class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int wynik = 0;
        int l = 0; int r = 1;
        int zysk = 0;
        while(r < prices.size()){
            if(prices[l] <= prices[r]) zysk = prices[r] - prices[l];
            if(prices[l] >= prices[r]) l = r;
            wynik = max(wynik, zysk);
            r++;
        }
        return wynik;
    }
};
