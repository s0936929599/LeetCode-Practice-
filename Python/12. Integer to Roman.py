class Solution:
    def intToRoman(self, num: int) -> str:
        dic={"M":1000,"CM":900,"D":500,"CD":400,"C":100,"XC":90,"L":50,"XL":40,"X":10,"IX":9,"V":5,"IV":4,"I":1}
        key=[x for x in(dic.keys())]
        val=[y for y in(dic.values())]
        ans=[]
        for i in range(len(dic)): 
            while num-val[i]>=0:
                num=num-val[i]
                ans.append(key[i])
        return(''.join(ans)) 
