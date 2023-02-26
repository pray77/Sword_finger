public class Solution {
    public boolean Find(int target, int [][] array) {
        int row = array.length;
        int col = array[0].length;
        if(row == 1 && col == 0) return false;
        int i = 0; 
        int j = col -1;
        while(array[i][j] != target)
        {
            if(array[i][j] < target)    i++;
            else    j--;
            if(j<0 || i==row) return false;
        }
        return true;
    }
    }
