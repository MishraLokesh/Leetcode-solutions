class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> AB = nums;
        AB.insert(AB.end(), nums.begin(), nums.end());
    return AB;
    }
};
