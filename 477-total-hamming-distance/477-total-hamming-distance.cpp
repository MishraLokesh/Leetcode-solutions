class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n=nums.size();
        vector<int>bits(32,0);
        for(auto x:nums){
            for(int i=0;i<32;i++){
                if(x&1){
                    bits[i]++;
                }
                if(x>0)
                    x/=2;
                else break;
            }
        }
        long long ans=0;
        for(auto x:bits){
            if(x>0){
                ans+=x*(n-x);
            }
        }
        return ans;
    }
};