class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minbuy = prices[0]
        maxfit = 0
        for i in range(1,len(prices)):
            minbuy = min(minbuy,prices[i])
            maxfit = max(prices[i] - minbuy,maxfit)
        return  maxfit
