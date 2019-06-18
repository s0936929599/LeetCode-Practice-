class Solution:
    def arrayPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        sum=0
        if len(nums)%2==0:
            nums=sorted(nums)
            for i in range(0,len(nums),2):
                 sum=sum+nums[i]
            return(sum)
        
