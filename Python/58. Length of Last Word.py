class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s.strip()
        if s=='' or s[::-1]==' ':
            return(0)
        elif " " not in s:
            return(len(s))
        s=s[::-1]
        count=0
        
        for i in range(len(s)):
            if s[i]==' ' :
                return(count)
               
            else:
                count+=1   
