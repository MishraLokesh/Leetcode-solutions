class Solution {
public:
    vector<vector<int>> ret;
    void sub_seq(int i, vector<int> v, vector<int> vec, int target, int n){
        if(i==n) {
            if(target==0){
                ret.push_back(v);
            }
            return;
        }
        if(vec[i]<=target){
            v.push_back(vec[i]);
            target-=vec[i];
            sub_seq(i, v, vec, target, n);
            v.pop_back();
            target+=vec[i];
        }
        sub_seq(i+1, v, vec, target, n);
    }

    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v1;
        sub_seq(0, v1, candidates, target, candidates.size());
        return ret;
    }
};