class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ret;
        int count = 0;
        for(auto it: queries){
            count = 0;
            for(auto a: points){
                int x = pow((it[0] - a[0]),2);
                int y = pow((it[1] - a[1]),2);
                double dist = pow((x + y),0.5);
                int rad = it[2];
                if(dist <= rad) count++;
            }
            ret.push_back(count);
        }
        return ret;
    }
};
