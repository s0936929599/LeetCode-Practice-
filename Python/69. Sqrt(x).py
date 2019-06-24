class Solution:
    def mySqrt(self, x: int) -> int:
        if x==0 or x==1:
            return(x)        
        a=x
        while a**2>=x:
            a/=1.01
        a=int(a)
        for i in range(a,x+1):
            if i**2>x and (i-1)**2<x:
                return(i-1)
            elif i**2==x:
                return(i)
