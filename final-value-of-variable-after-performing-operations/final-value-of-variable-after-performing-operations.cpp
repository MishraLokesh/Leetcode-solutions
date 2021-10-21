class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for(auto it: operations) {
            if(it=="++X" || it=="X++") X++;
            else if(it=="--X" || it=="X--") X--;
        }
        return X;
    }
};