class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        vector<int> dup = nums;
        sort(dup.begin(), dup.end());
        for(int i = 0; i < dup.size(); i++){
            ans = ans^dup.at(i);
        }
        return ans;
    }
};