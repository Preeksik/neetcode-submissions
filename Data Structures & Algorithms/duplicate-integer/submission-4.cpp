class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> licznik;
        for(int num : nums){
            licznik[num]++;
            if(licznik[num] > 1){
                return true;
            }
        }
        return false;
    }
};