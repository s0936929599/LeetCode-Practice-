class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int        """
        if prices==[]:
            return(0)
       
        max_number=0
        min_buy=prices[0]
        for i in  prices:
            min_buy=min(i,min_buy)
            profit=i-min_buy
            max_number=max(max_number,profit)
        return(max_number)
