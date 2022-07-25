class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int mini = INT_MAX; bool flag = true; string res = "";
        for(auto it:strs) {
            int l = it.size(); 
            mini = min(mini, l);
        }
        int len = mini; cout<<len;       
        for(int i=0;i<len;i++){
            for(auto it:strs){
                char s = strs[0][i];
                if(it[i]!=s) {
                    flag = false; break;
                }
            }
            if(flag) res += strs[0][i];
            else return res;
        }
        return res;
        
    }
};