class Solution {
public:
    string interpret(string command) {
        int i=0;
        string ret = "";
        while(i<command.length()){
            if(command[i] == 'G') { ret += 'G'; i++; }
            else if (command[i] == '(' and command[i+1] == ')') { ret += 'o'; i+=2; }
            else if (command[i] == '(' and command[i+1]=='a' and command[i+2] =='l' and command[i+3]==')') { ret += "al"; i+=4; }
            else { i++; continue; }
        }
        return ret;
    }
};

