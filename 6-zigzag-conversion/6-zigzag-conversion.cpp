class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        string ret = ""; int counter = 0; bool flag = true;
        vector<vector<char>> v(numRows);
        for(auto it:s){
            v[counter].push_back(it);
            if(flag) counter++;
            else counter--;
            
            
            if(counter == 0) flag = true;
            else if(counter == numRows-1) flag = false;
        }
        for(auto i:v){
            for(auto j:i) ret=ret+j;
        }
    return ret;
    }
};