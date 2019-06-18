class Solution:
    def divide(self, dividend, divisor):
        """
        :type dividend: int
        :type divisor: int
        :rtype: int
        """
         
        if divisor*dividend>=0:
            if dividend >=2**31:
                dividend=2**31-1
            if divisor >=2**31:
                divisor=2**31-1
            if dividend <=-(2**31):
                dividend=-2**31+1
            if divisor <=-(2**31):
                divisor=-2**31+1 
            return(dividend//divisor)
        else:
            if dividend >=2**31:
                dividend=2**31-1
            if divisor >=2**31:
                divisor=2**31-1
            if dividend <=-(2**31):
                dividend=-2**31
            if divisor <=-(2**31):
                divisor=-2**31
            divisor=abs(divisor)
            dividend=abs(dividend)
            return(-(dividend//divisor))
        
