class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
            
        if len(needle)==0:
            return(0)
        elif needle in haystack:
            for x in range(len(needle)): 
                for j in range(len(haystack)):
                    if needle[x]==haystack[j] and needle == haystack[j:j+len(needle)]:
                        return(j)
        else:
            return(-1)
