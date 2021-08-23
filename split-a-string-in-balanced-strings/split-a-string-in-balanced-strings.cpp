class Solution {
public:
    int balancedStringSplit(string s) {
        stack<char> v;
        int count = 0, tot = -1;
        for(int i=0;i<s.length();i++){
            if(v.size()==0) tot++;
            if(v.size()==0 or s[i]==v.top()) v.push(s[i]);
            else if(v.top() != s[i]) {v.pop();}
        } 
    return tot+1;
    }
};

