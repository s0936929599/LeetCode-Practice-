class Solution:
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        x=str(x)
        if int(x)==0:
            return(0)
        while int(x[-1])==0:
            x=x[:-1]
        if int(x)<0:
            if int(x)<=(-2**31):
                return (0)
            else:
                x="-"+str(x[:0:-1])
                if int(x)<-2**31:
                    return(0)
                return(int(x))
        if int(x)>2**31:
            return (0)  
        else:
            if int(x[::-1])>2**31:
                return(0)
            
        return(int(x[::-1]))
        
