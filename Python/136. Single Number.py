class Solution:
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """  
        return sum(list(set(nums)))*2 - sum(nums)
