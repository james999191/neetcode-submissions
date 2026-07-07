class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        ma = defaultdict(int)
        res = 0

        for n in nums:
            if not ma[n]:
                ma[n] = ma[n - 1] + ma[n + 1] +1
                ma[n - ma[n - 1]] = ma[n]
                ma[n + ma[n + 1]] =ma[n]
                res = max(res, ma[n])

        
        return res
        