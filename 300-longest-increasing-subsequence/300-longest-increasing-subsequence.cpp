class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> lis;
        lis.push_back(nums[0]);
        for(auto it:nums){
            if(it > lis.back()) lis.push_back(it);
            else {
                auto ind = lower_bound(lis.begin(), lis.end(), it);
                // lis[nums.size()-1-(ind - nums.begin())] = it;
                lis[ind-lis.begin()] = it;
                cout<<(ind-lis.begin())<<" ";
            }
        }
        return lis.size();
    }
};

/*
10
9
2
2 5
2 3
2 3 7
2 3 7 101
2 3 7 18
*/