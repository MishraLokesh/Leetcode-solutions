class Solution {
public:
         uint32_t reverseBits(uint32_t n) {
        uint32_t res=0,cnt=1; 
        bitset<32>b(n);
        string s=b.to_string();
        for(int i=0; i<32; i++)
        {
            if(s[i]=='1')
            res+=cnt;
            cnt<<=1;
        }
        return res;
    }
   
};