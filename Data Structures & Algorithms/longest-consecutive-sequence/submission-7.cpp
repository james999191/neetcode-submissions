class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> ma;
        int res = 0;

        for (int n : nums){
            if (!ma[n]){
                ma[n] = ma[n-1] + ma[n+1] + 1;
                ma[n - ma[n-1]] =ma[n];
                ma[n + ma[n+1]] = ma[n];
                res = max(res, ma[n]);
            }
        }

        return res;
        
    }
};
