class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int curr = 0; vector<int> ret;
        for(auto it : nums){
            curr += it;
            ret.push_back(curr);
        }
        return ret;
    }
};