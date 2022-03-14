class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool ans = false; int i=0,j=0;
        while(true) {
            if(i==s.size()) {ans = true; break;}
            else if(j == t.size() && i<s.size()) {break;}
            if(s[i] == t[j])  {i++;j++;}
            else j++;
        }
        return ans;
    }
};
