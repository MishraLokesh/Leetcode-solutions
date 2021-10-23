class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1) return n;
        int count = 0,i=1;
        while(n>=0){
            count++;
            n-=i;
            i++;
        }
    return count-1;
    }
};