class Solution {
public:
    
    vector<vector<int>> res;
    vector<vector<int>> solve(vector<int> nums, vector<int> store) {
      if(nums.size() == 0) {
        res.push_back(store);
        return res;
      }
      int ele = nums[nums.size()-1];
      nums.pop_back();
      solve(nums, store);
      store.push_back(ele);
      solve(nums, store);
      return res;
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
          vector<int> s;
          vector<vector<int>> ans = solve(nums ,s);
        return ans;
    }
};