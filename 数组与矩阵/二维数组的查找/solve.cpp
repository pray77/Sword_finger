class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int row = array.size();
        int col = array[0].size();
        int j = col -1;
        int i = 0;
        for(;j >= 0 && i !=row;) {
            if(target > array[i][j]) i++;
            else if (target < array[i][j]) j--;
            else return true;
        }
        return false;
    }
};
