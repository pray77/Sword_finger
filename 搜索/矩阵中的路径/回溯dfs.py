#
# 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
#
# 
# @param matrix string字符串 
# @param rows int整型 
# @param cols int整型 
# @param str string字符串 
# @return bool布尔型
#
class Solution:
    visited = []
    def dfs(self , matrix, rows, cols, str, row, col, k):
        if(row<0 or row>=rows or col < 0 or col>=cols or self.visited[row*cols+col] or matrix[row*cols+col] != str[k]):
            return False
        self.visited[row*cols+col] = True
        k += 1
        if(k==len(str)):
            return True
        if (self.dfs(matrix,rows,cols, str ,row+1,col,k)
        or self.dfs(matrix,rows,cols, str ,row-1,col,k)
        or self.dfs(matrix,rows,cols, str ,row,col+1,k)
        or self.dfs(matrix,rows,cols, str ,row,col-1,k)):
            return True
        return False
                 
    def hasPath(self , matrix , rows , cols , str ):
        # write code here
        for i in range(len(matrix)):
            self.visited=[False]*rows*cols
            row = i//cols
            col = i%cols
            if(matrix[i]==str[0]):
                if self.dfs(matrix,rows,cols, str ,row,col,0) == True:
                    return True
        return False
