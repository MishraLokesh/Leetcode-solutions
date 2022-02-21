class Solution {
public:
    map<int, int> m;
    bool containsKey(int k) {
        return m.find(k) == m.end() ? false : true;
    }
    int findPairs(vector<int>& nums, int k) {
        int count = 0;
        for(auto it : nums) m[it]++ ;
        
        for(auto it=m.begin(); it!=m.end(); it++){
            if(k==0) {
                if(it->second >= 2) count++;
            }
            else {
                if(containsKey(it->first + k)) { count++; }
            }
        }
        return count;
        
    }
};