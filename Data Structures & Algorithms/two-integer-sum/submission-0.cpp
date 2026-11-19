class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> odp;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i; j < nums.size(); j++){
                if(nums[i] + nums[j] == target and j != i){
                    odp.push_back(i);
                    odp.push_back(j);
                }
            }
        }
        return odp;
    }
};
