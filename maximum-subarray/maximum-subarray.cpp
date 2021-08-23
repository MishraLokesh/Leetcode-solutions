class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int sum=0,maxSum=INT_MIN;
        for(int i=0;i<v.size();i++) {
            sum+=v[i];
            maxSum = max(sum,maxSum);
            if(sum < 0) sum=0;

        }
        return maxSum;
    }
};
