class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n=len(nums)
        mp={}
        for i in range(n):
            res=target-nums[i]
            if res in mp:
                return [mp[res],i]
            else:
                mp[nums[i]]=i
 
