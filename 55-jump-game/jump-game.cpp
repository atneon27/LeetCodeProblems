class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int rechable=0; 
        for(int i=0;i<n;i++)
        {
            if(rechable<i){
                return false;
            }
            else{
                rechable=max(rechable,i+nums[i]);
            }
        }
        return true;
    }
};