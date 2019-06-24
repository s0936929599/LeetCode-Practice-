class Solution:
    def removeDuplicates(self, nums):
        j=0
        if len(nums)==1:
            return(1)
        elif nums==[]:
            return(0)
        else:
            for i in range(len(nums)):      
                if nums[i] == nums[i-1]:
                    continue
                else:
                    nums[j]=nums[i]
                    j+=1
            if nums[:j]==[]:
                return(1)
            else:
                return(len(nums[:j]))
