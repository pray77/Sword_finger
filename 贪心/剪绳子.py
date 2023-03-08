#
# 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
#
# 
# @param number int整型 
# @return int整型
#
class Solution:
    def cutRope(self , number: int) -> int:
        # write code here
        if number <= 3:
            return number-1
        timesof3 = number // 3
        if(number - timesof3*3 == 1):
            timesof3-=1
        timesof2 = (number - timesof3*3)//2
        return 3**timesof3*2**timesof2
