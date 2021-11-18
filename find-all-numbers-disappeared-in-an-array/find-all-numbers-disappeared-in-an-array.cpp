class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ch(nums.size(), 0); vector<int> ret;
        for(int i=0; i<nums.size(); i++) {
            ch[nums[i]-1]++;
        }
        for(int i=0;i<nums.size();i++){
            if(ch[i]==0) ret.push_back(i+1);
        }
        return ret;
    }
};

// [1,2,2,1,0,0,1,1]
    // 0 1 2 3 4 5 6 7