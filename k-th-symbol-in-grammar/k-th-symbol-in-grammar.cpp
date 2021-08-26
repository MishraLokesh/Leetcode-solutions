class Solution {
public:
//     int kth_grammer(int n, int k, queue<int> v) {
//       int l = v.size();
//     if(pow(2,(n-1)) == l) {
//         for(int i =0;i<(k-1); i++) v.pop();
//         return v.front();
//       }

//       for(int i=0;i<l;i++) {
//         int ele = v.front();
//         if(ele == 0) { v.push(0); v.push(1); }
//         else if(ele == 1) { v.push(1); v.push(0); }
//         v.pop();
//       }
//       int res = kth_grammer(n,k,v);
//       return res;
//     }
    
//     int kthGrammar(int n, int k) {
//       if(n==1) return 0;
//       queue<int> v;
//       v.push(0);
//       int ans = kth_grammer(n,k,v);
//       return ans;
//     }
    int kthGrammar(int N, int K) {
        return __builtin_popcount(K - 1) & 1;
    }
};