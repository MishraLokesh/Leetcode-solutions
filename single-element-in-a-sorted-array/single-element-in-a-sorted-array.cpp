class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ret = 0;
        for(auto it: nums){
            ret = (ret ^ it);
        }
        return ret;
    }
};
