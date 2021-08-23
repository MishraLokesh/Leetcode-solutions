class Solution {
public:
    bool buddyStrings(string A, string B) {
//        string org = s;
//         reverse(org.begin(), org.end());
//         if((s.compare(org) == 0) and (s.compare(goal) == 0)) {return true;}
//         else if((s.compare(goal) == 0) and (s.compare(org) != 0)) return false;
    
//         vector<int> v;
//         for(int i=0;i<s.length();i++) {
//             if(s[i] != goal[i]) { v.push_back(i); }
//         }
//         if((s.compare(goal) != 0) && (v.size()==0 or v.size() > 2)) return false;
//         int first = v[0];
//         int second = v[1];
        
//         char t = s[first];
//         s[first] = s[second];
//         s[second] = t;
        
//         if((s.compare(goal)) == 0) return true;
//         else return false;
        
         if (A.size() != B.size()) return false;
        int diff1 = -1, diff2 = -1;
        unordered_set<char> A_letters;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] != B[i]) {
                if (diff1 == -1)
                    diff1 = i;
                else if (diff2 == -1)
                    diff2 = i;
                else
                    return false;
            }
            A_letters.insert(A[i]);
        }
        if (diff1 != -1 && diff2 != -1)
            return A[diff1] == B[diff2] && A[diff2] == B[diff1]; 
        if (diff1 != -1)
            return false;
        return A_letters.size() < A.size();
        
    }
};