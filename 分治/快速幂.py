#
# 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
#
# 
# @param base double浮点型 
# @param exponent int整型 
# @return double浮点型
#
class Solution:
    def fastpow(self, base: float, exponent: int) -> float:
        if(exponent==1):
            return base
        result = self.fastpow(base,exponent//2)
        result = result * result
        if(exponent%2!=0):
            result = result * base
        return result
    def Power(self , base: float, exponent: int) -> float:
        # write code here
        if(exponent<0):
            base = 1/base
            exponent = -exponent
        if(exponent==0):
            return 1.00000
        return self.fastpow(base,exponent)
