class Solution {
public:
    int missingNumber(vector<int>& nums){
        vector<int> dup = nums;
        sort(dup.begin(),dup.end());
        int a;
        for(int i=0; i<dup.size(); i++){
            if(dup.at(i)!=i){
                a = i;
                break;
            }
        }
        return a;
    }
};