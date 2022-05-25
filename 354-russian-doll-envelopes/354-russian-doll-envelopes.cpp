// class Solution {
// public:
//     static bool sortcol(vector<int> &v1, vector<int> &v2){
//         if(v1[0]==v2[0]) return v1[1]>v2[1];
        
//         else return v1[0]<v2[0];
//     }
//     int maxEnvelopes(vector<vector<int>>& envelopes) {
//         int counter = 0, curr=0, i;
//         sort(envelopes.begin(), envelopes.end(), sortcol);
//         for (i = 1; i < envelopes.size(); i++) {
//             cout<<"curr- "<<curr<<" counter- "<<counter<<endl;
//             if(envelopes[curr][0] < envelopes[i][0] && envelopes[curr][1] < envelopes[i][1]) {
//                     counter++;
//                     curr=i;
//             }
//             //  for (int j = 0; j < envelopes[0].size(); j++)
//             //     cout << envelopes[i][j] << " ";
//             // cout << endl;
//         }
        
//         cout<<"curr- "<<curr<<" counter- "<<counter<<endl;
//         cout<<i;
//         return counter+1;
//     }
// };

class Solution {
public:
    static bool compare(vector<int> &a , vector<int> &b){
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n=envelopes.size();
        sort(envelopes.begin(),envelopes.end(),compare);
        
        vector<int> lis;
        for(int i=0;i<n;i++){
            int ht = envelopes[i][1];
            auto idx = lower_bound(lis.begin(),lis.end(),ht)-lis.begin();
            if(idx==lis.size())
                lis.push_back(ht);
            else lis[idx]=ht;
        }
        
        return lis.size();
    }
};