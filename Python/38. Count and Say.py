class Solution:
    def countAndSay(self, n: int) -> str:
        all_ans=['1']
        for k in range(n): 
            i=''.join(all_ans[-1])+'0'
            s=1
            ans=[]
            count=1
            while s!=len(i):
                if i[s]==i[s-1]:
                    count+=1
                    s+=1
                    continue
                else:
                    ans.append(str(count))
                    ans.append(str(i[s-1]))
                count=1
                s+=1
            all_ans.append(ans)
        return(''.join(all_ans[-2]))
