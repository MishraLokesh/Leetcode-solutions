class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>  ret;

        for (auto it : nums) {
            ret.push_back(nums[it]);
        }
        return ret;
    }
};