class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curMax = nums[0], curMin = nums[0], res = nums[0];

        for (int i = 1; i < nums.size(); i ++){
            int n = nums[i];
            int a = n;
            int b = curMax * n;
            int c = curMin * n;
            curMax = max({a, b, c});
            curMin = min({a, b, c});

            res = max(res, curMax);
        }

        return res;


        
    }
};
