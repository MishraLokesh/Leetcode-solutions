class Solution {
public:
    double myPow(double x, int N) {
        long long n = N;
        double ans = 1;
        bool flag = false;
        if(n<0) { flag = true; n=n*(-1); }
        while(n) {
           if(n%2!=0) { ans *= x; n--; }
           else {
               x = x*x; n = n/2;
           } 
        }
        if(flag) return 1/ans;
        return ans;
    }
};