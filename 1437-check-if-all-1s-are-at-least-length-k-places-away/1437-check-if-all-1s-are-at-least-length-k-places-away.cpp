class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        //postion 1's
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1) v.push_back(i);
        }
        int diff;
        for(int i=1; i<v.size(); i++){
            diff = v[i]-v[i-1]-1;
            if(diff<k) return false;
        }
        return true;
    }
};