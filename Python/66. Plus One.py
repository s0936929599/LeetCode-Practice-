class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        digits=map(str,digits)
        digits=str(int(''.join(digits))+1)
        return([int(x) for x in digits])
