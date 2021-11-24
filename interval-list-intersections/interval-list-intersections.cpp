// class Solution {
// public:
//     vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
// 	vector<vector<int>> ret; vector<int> ans(2); int a, b, fe = -1, se = -2;
// 	for (int i = 0; i < min(firstList.size(),secondList.size()); i++) {
// 		if (fe == secondList[i][0]) { ans[0] = ans[1] = fe; ret.push_back(ans); }
// 		if (se == firstList[i][0])  { ans[0] = ans[1] = se; ret.push_back(ans); }
// 		a = max(firstList[i][0], secondList[i][0]);
// 		b = min(firstList[i][1], secondList[i][1]);

// 		ans[0] = a; ans[1] = b;
// 		ret.push_back(ans);
// 		fe = firstList[i][1]; se = secondList[i][1];
// 	}
// 	return ret;
// }
// };

class Solution {
public:
vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> v;
        int i=0,j=0;
        while(i<A.size() && j<B.size()){
            int l=max(A[i][0], B[j][0]);
            int u=min(A[i][1], B[j][1]);
            if(l<=u) v.push_back({l,u});
            if(A[i][1] < B[j][1])   i++;
            else j++;
        }
        return v;
    }
};