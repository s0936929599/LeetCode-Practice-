def star_1(n):    
    for i in range(n):        
        for j in range(i+1):            
            print("*",end='')
        print("\n",end='')
        
def star_2(n):    
    for i in range(n):        
        for j in range(n-i):            
            print("*",end='')
        print("\n",end='')
        
def star_3(n):    
    for i in range(n):        
        for j in range(i+1):            
            print("*",end='')     
        print("\n",end='')
    for i in range(n):        
        for j in range(n-i-1):            
            print("*",end='')
        print("\n",end='') 
def star_ltor(n):
    for _ in range(n):
        for __ in range(n-_-1):
            print(" ",end='')
        for ___ in range(_+1):
            print("*",end='')
        print("\n",end='')

def star_triangle(n):
    for _ in range(1,n+1):
        for __ in range(n-_):
            print(" ",end='')
        for ___ in range(2*_-1):
            print("*",end='')
        for ____ in range(n-_):
            print(" ",end='')
        print("\n",end='')
def printStar(width): # ptt test
    for i in range(width//2+1): 
        for k in range(i):
            print(" ",end="")
        for j in range(width-2*i):
            print("*",end="")
        print("\n",end="")
        
    for ii in range((width//2)):
        for kk in range(width//2-ii-1):
            print(" ",end="")
        for jj in range((ii+2)*2-1):
            print("*",end="")
        print("\n",end="")
#star_1(3)
#star_2(3)
#star_3(20)
#star_ltor(10)
#star_triangle(50)
printStar(51)
