class Solution:
    def toLowerCase(self, str):
        """
        :type str: str
        :rtype: str
        """  
        bb=list(str)
        a=[]
        for i in range(0,len(bb)):
    
            if (90>=ord(bb[i]) & ord(bb[i])>=65):
                (bb[i])=(ord(bb[i])+32)
                ii=chr((bb[i]))
            else:
                ii=((bb[i]))
            a.append(ii)
        return (''.join(a))
    
