class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp;
        mp.insert({'I',1}); mp.insert({'V',5}); mp.insert({'X',10}); mp.insert({'L',50});
        mp.insert({'C',100}); mp.insert({'D',500}); mp.insert({'M',1000});
        
        int sum = 0;
        for(int i=0;i<s.size();i++){
            // cout<<sum<<endl;
            if(i<s.size()-1){
                if(s[i]=='I' && s[i+1]=='V') {sum+=4; i=i+1; continue;}
                if(s[i]=='I' && s[i+1]=='X') {sum+=9; i=i+1; continue;}
                if(s[i]=='X' && s[i+1]=='L') {sum+=40; i=i+1; continue;}
                if(s[i]=='X' && s[i+1]=='C') {sum+=90; i=i+1; continue;}
                if(s[i]=='C' && s[i+1]=='D') {sum+=400; i=i+1; continue;}
                if(s[i]=='C' && s[i+1]=='M') {sum+=900; i=i+1; continue;}
            }
            sum+=mp[s[i]];
        }
        return sum;
    }
};