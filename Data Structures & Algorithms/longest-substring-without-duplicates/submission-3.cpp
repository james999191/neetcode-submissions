class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        for (int i = 0; i < s.size();i++){
            unordered_set<char> c;
            for (int j = i; j < s.size(); j++){
                if (c.find(s[j]) != c.end()){
                    break;
                }

                else c.insert(s[j]);
            }

            res = max(res, (int)c.size());
            
        }
        return res;
        
    }
};
