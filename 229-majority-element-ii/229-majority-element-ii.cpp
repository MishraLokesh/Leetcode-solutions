class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int len = nums.size();
        vector<int> ret;
        map<int,int> m;
        for(auto it: nums) {
            if(m.find(it) == m.end()) m[it]=1;
            else m[it]++;
        }
        for(auto it = m.begin(); it != m.end(); ++it) {
            // cout << it-> first<<" "<<it->second<<endl;
            if((it->second)>(len/3)) 
                ret.push_back(it->first);
        }
        return ret;
    }
};