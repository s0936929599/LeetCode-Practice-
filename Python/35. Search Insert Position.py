class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        if target in nums:
            x=[x for x in range(len(nums)) if nums[x] == target]
            return(x[0])
        elif max(nums)>target:
            x=[x for x in range(len(nums)) if nums[x] > target]
            return(x[0])
        else:
            x=[x for x in range(len(nums)) if nums[x] < target]
            return(x[-1]+1)
