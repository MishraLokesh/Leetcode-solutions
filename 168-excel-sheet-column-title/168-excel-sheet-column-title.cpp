class Solution {
public:
    string convertToTitle(int nums) {
        string str="";
        while(nums){
            int a=nums%26;
            if(a==0){str+='Z';nums-=1;}
            else
            str+=('A'+(a-1));
            nums=nums/26;
        }
        reverse(str.begin(),str.end());
        return str;
    }
};