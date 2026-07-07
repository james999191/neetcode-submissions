class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prod_all, zero_cnt = 1, 0
        for n in nums:
            if n:
                prod_all *= n
            else:
                zero_cnt += 1
        if zero_cnt > 1: return [0]*len(nums)

        res = [0]*len(nums)

        for index, value in enumerate(nums):
            if not zero_cnt:
                res[index] = prod_all // value
            elif zero_cnt and (value == 0):
                res[index] = prod_all
        
        return res
        