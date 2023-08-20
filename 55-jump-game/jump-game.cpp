class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int rechable=0;//jaha tak ja sakte ho 
        for(int i=0;i<n;i++)//rechable < n nahi rechable < i hoga
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