class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        curMax = curMin = res = nums[0]

        for n in nums[1:]:
            a = n
            b = curMax * n
            c = curMin * n

            curMax = max(a, b, c)
            curMin = min(a, b, c)

            res = max(res, curMax)

        
        return res
        