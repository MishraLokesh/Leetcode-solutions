class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ret; int mx=0;
        for(auto it: candies) mx = max(mx, it);
        for(auto it: candies) {if((it+extraCandies) >= mx) ret.push_back(true); else ret.push_back(false);}
        return ret;
    }
};