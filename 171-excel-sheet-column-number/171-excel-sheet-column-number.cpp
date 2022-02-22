class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len = columnTitle.length();
        int ans = 0;
        for(auto it:columnTitle){
            int val = int(it) - 64;
            ans = ans * 26 + val;
        }
        return ans;
    }
};


/*

 -A B C D E F ... X Y Z  26
A-A B C D E F ... X Y Z  26
B-A B C D E F ... X Y Z  26
C-A B C D E F ... X Y Z  26
D-A B C D E F ... X Y Z  26
E-A B C D E F ... X Y Z  26
.
.
.
X-A B C D E F ... X Y Z  26
Y-A B C D E F ... X Y Z  26
Z-A B C D E F ... X Y Z  26
AA-A B C D E F ... X Y Z 26
*/