class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
            
        ans=[]
        if rowIndex==0:
            return([1])
        
        else:
            for i in range(1,rowIndex+2):
                a=[]
                if i==1:
                    a=[1]
                    ans.append(a)
                    
                elif i==2:
                    a=[1,1]
                    ans.append(a)
                    
                else:
                    for l in range(i):  
                        if l==0 or l==i-1:
                            a.append(1)
                        else:
                            a.append(ans[i-2][l]+ans[i-2][l-1])
                    ans.append(a)
            return(ans[-1])
       
