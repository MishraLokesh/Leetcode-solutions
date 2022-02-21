class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        map<int,int> m;
        for(auto it: nums) {
            if(m.find(it) == m.end()) m[it]=1;
            else m[it]++;
        }
        for(auto it = m.begin(); it != m.end(); ++it) {
            // cout << it-> first<<" "<<it->second<<endl;
            if((it->second)>(len/2)) 
                return it->first;
        }
        return -1;
    }
};