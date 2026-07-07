class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res (n, 0);
        vector<int> pref (n, 0);
        vector<int> suff (n, 0);

        pref[0] = suff[n - 1] = 1;

        for (int i = 1; i < n; i++){
            pref[i] = nums[i - 1] * pref[i - 1];
        }

        for (int i = n-2; i > -1; i--){
            suff[i] = nums[i + 1] * suff[i + 1];
        }

        for (int i = 0; i < n; i++){
            res[i] = pref[i] * suff[i];
        }
        return res;

    }
};
