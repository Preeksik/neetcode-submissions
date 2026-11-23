class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> odp;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(i > 0 and nums[i] == nums[i - 1]){
                continue;
            }
            int l = i + 1;
            int r = nums.size() - 1;
            while(l < r){
                int suma = nums[i] + nums[l] + nums[r];
                if(suma < 0) l++;
                if(suma > 0) r--;
                if(suma == 0){
                    odp.push_back({nums[l], nums[i], nums[r]});
                    l++; r--;
                    while(l < r and nums[l] == nums[l - 1]) l++;
                }
            }
        }
        return odp;
    }
};
