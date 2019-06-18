class Solution:
    def longestCommonPrefix(self, strs) :
        output=[]
        for i in zip(*strs):
            if len(set(i))>1: break
            output.append(i[0])
        return(''.join(output))
