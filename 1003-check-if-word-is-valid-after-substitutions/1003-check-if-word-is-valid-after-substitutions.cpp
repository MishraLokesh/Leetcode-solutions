class Solution {
public:
    bool isValid(string s) {
        string t = "abc";
        while(s.size()){
            int found = s.find(t);
            if(found<0 or found>s.size()) return false;
            s.erase(found, 3);
        }
        return true;
    }
};
















// class Solution {
// public:
//     bool isValid(string s) {
//         string S="",temp="";
//         while(true){
//             cout<<s<<endl;
//             if(s.size()==3){
//                 return (s=="abc") ? true : false;
//             }
//             int start=-1;
//             for(int i=0;i<s.size()-3;i++){
//                 temp = s[i]+s[i+1]+s[i+2];
//                 if(temp == "abc") start=i;
//             }
//             if(start!=-1){            
//                 for(int i=0;i<start;i++) S+=s[i];
//                 for(int i=start+3;i<s.size();i++) S+=s[i];
//                 s=S;
//             }
            
//         }
//         return false;
//     }
// };