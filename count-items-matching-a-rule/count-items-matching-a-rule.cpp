class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        for(int i=0;i<items.size();i++) {
            vector<string> v = items[i];
            if(ruleKey=="type" and (v[0] == ruleValue)) count++;
            else if(ruleKey=="color" and (v[1] == ruleValue)) count++;   
            else if(ruleKey=="name" and (v[2] == ruleValue)) count++;
        }
        return count;
    }
};

