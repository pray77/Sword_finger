#
# 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
#
# 
# @param str string字符串 
# @return string字符串一维数组
#
class Solution:
    set1 = []
    def dfs(self, str, k):
        if(k==len(str)-1):
            self.set1.append("".join(str))
            return
        for i in range(k,len(str)):
            tmp = str[k]
            str[k] = str[i]
            str[i] = tmp
            self.dfs(str,k+1)


    def Permutation(self , str: str) -> List[str]:
        self.dfs(list(str),0)
        return self.set1
        # write code here
