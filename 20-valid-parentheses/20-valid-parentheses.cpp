class Solution {
public:
    bool isValid(string s) {
        stack<char> st; bool flag=true;
        for(auto it:s){
            if(it=='(' || it=='{' || it=='[') st.push(it);
            else if(it==')' && !st.empty() && st.top()=='(') st.pop();
            else if(it=='}' && !st.empty() && st.top()=='{') st.pop();
            else if(it==']' && !st.empty() && st.top()=='[') st.pop();
            else st.push(it);
        }
        return st.empty();
    }
};

