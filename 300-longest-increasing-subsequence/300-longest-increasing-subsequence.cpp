class Solution {
public:
    int f(int n, vector<int> &nums, int prev, int ind, vector<vector<int>> &dp){
        if(ind == n) return 0;
        if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
        int pick = INT_MIN;
        int not_pick = 0+f(n, nums, prev, ind+1, dp);
        if(prev==-1 || nums[ind]>nums[prev])
            pick = 1+f(n, nums, ind, ind+1, dp);
        return dp[ind][prev+1] = max(pick, not_pick);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size(), vector<int>(nums.size(), -1));
        return f(nums.size(), nums, -1, 0, dp);
    }
};