using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stac;
        unordered_map<char, char> close = {
            { ')' , '('},
            { ']' , '['},
            { '}' , '{'}
        };

        for (char c : s){
            if (close.count(c)){
                if (!stac.empty() && stac.top() == close[c]){
                    stac.pop();
                }
                else return false;
            }
            else stac.push(c);
        }

        return stac.empty();


        
    }
};
