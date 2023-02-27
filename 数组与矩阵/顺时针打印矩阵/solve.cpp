#include <iostream>
#include <sys/types.h>
#include <vector>
class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int i = 0;
        int j = 0;
        int k = 0;
        vector<int> result;
        for (;;) {
            for (;i<col-k;i++) result.push_back(matrix[j][i]);
            j++;i--;
            if(result.size()>=row*col) break;
            for (;j<row-k;j++) result.push_back(matrix[j][i]);
            j--;i--;
            if(result.size()>=row*col) break;
            for (;i>=k;i--) result.push_back(matrix[j][i]);
            i++;j--;k++;
            if(result.size()>=row*col) break;
            for (;j>=k;j--) result.push_back(matrix[j][i]);
            j++;i++;
            if(result.size()>=row*col) break;
        }
        return result;
    }
};
