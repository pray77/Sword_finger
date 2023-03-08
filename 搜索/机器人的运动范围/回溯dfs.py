#
# 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
#
# 
# @param threshold int整型 
# @param rows int整型 
# @param cols int整型 
# @return int整型
#
class Solution:
    visit = []
    nums = 0
    def dfs(self, threshold, rows, cols, row, col):
        if(row<0 or col<0 or row>=rows or col>=cols or self.visit[row*cols+col] or int(str(row)[0],10)+int(str(row).ljust(2,'0')[1],10)+int(str(col)[0],10)+int(str(col).ljust(2,'0')[1],10)>threshold):
            return 
        self.nums +=1
        self.visit[row*cols+col] = True
        self.dfs(threshold, rows, cols, row+1, col)
        self.dfs(threshold, rows, cols, row-1, col)
        self.dfs(threshold, rows, cols, row, col+1)
        self.dfs(threshold ,rows, cols, row, col-1)
        return

        
    def movingCount(self , threshold: int, rows: int, cols: int) -> int:
        # write code here
        self.visit = [False]*rows*cols
        self.dfs(threshold, rows, cols, 0, 0)
        return self.nums
