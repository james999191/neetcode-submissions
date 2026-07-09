class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;

        while (l < r) {
            int m = (l + r) / 2;

            if (nums[m] > nums[r]) {
                l = m + 1;
            } else {
                r = m;
            }
        }

        int pivot = l;

        auto bs = [&](int left, int right) -> int {
            while (left <= right) {
                int mid = (left + right) / 2;

                if (nums[mid] == target) {
                    return mid;
                } else if (nums[mid] < target) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }

            return -1;
        };

        int result = bs(0, pivot - 1);
        if (result != -1) {
            return result;
        }

        return bs(pivot, nums.size() - 1);
    }
};