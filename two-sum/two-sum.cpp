class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> storage;
        for(int i = 0; i < nums.size(); i++){
            for(int j = nums.size()-1; j > i; j--){
                if((nums[i] + nums[j]) == target){
                    storage.emplace_back(i);
                    storage.emplace_back(j);
                    break;
                }
            }
            // break;
        }
        return storage;
    }
};