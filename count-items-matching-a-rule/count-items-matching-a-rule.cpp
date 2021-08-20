class Solution {
public:
    int countMatches(vector<vector<string>>& items, string key, string val) {
        // int count = 0;
        // for(int i=0;i<items.size();i++) {
        //     vector<string> v = items[i];
        //     // if(ruleKey=="type" and (v[0] == ruleValue)) count++;
        //     // else if(ruleKey=="color" and (v[1] == ruleValue)) count++;   
        //     // else if(ruleKey=="name" and (v[2] == ruleValue)) count++;
        //     if(ruleKey=="type" and (items[i][0] == ruleValue)) count++;
        //     else if(ruleKey=="color" and (items[i][1] == ruleValue)) count++;   
        //     else if(ruleKey=="name" and (items[i][2] == ruleValue)) count++;
        // }
        // return count;
    
        int idx = key == "type" ? 0 : key == "color" ? 1 : 2;
        return count_if(begin(items), end(items), [&](const auto &i) { return i[idx] == val; });
    }
    
};

