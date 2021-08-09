class Solution {
public:
    int fib(int n){
    return (n==1 || n==2) ? 1 : (n==0) ? 0 : fib(n-1) + fib(n-2);
    }
};
