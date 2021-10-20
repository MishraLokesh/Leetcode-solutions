class Solution {
public:
    string reverseWords(string str) {
        string rev = "", temp = "";
        bool start = true;
        int n = str.length();
        vector<string> ret;

        for (int i = 0; i < n; i++) {
            if ((str[i] == ' ') && start) continue;
            else {
                start = false;
                if (str[i] == ' ') {if (temp != "") {ret.push_back(temp); temp = "";}}
                else temp += str[i];
            }
        }
        if (temp != "") ret.push_back(temp);
        for (string it : ret) rev = it + ' ' + rev;
        rev = rev.substr(0, rev.length() - 1);
        return rev;
    }
};