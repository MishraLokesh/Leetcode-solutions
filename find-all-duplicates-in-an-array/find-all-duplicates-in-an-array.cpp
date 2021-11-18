class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ch(nums.size(), 0); vector<int> ret;
        for(int i=0; i<nums.size(); i++) {
            ch[nums[i]-1]++;
        }
        for(int i=0;i<nums.size();i++){
            if(ch[i]==2) ret.push_back(i+1);
        }
        return ret;
    }
};