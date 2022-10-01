from collections import Counter

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        ans = set()
        c = Counter(nums)
        for i in range(len(nums)):
            c[nums[i]] -= 1
            for j in range(i):
                rest = -nums[i] - nums[j]
                if c[rest]:
                    ans.add(tuple(sorted([nums[i], nums[j], rest])))
        return [*map(list, ans)]
