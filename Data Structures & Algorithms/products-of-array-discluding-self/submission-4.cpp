class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod_all = 1, zero_cnt = 0;
        for(int n : nums){
            if (n != 0){
                prod_all *= n;
            } else{
                zero_cnt++;
            }

        }

        if (zero_cnt > 1){
            return vector<int>(nums.size(), 0);
        }

        vector<int> res(nums.size(), 0 );
        for (size_t i = 0; i < nums.size(); i++){
            if (zero_cnt > 0){
                res[i] = (nums[i] == 0) ? prod_all : 0;
            } else {
                res[i] = prod_all / nums[i];
            }
        }

        return res;

    }
};
