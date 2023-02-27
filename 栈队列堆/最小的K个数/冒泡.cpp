#include <vector>
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        int size = input.size();
        vector<int> result;
        for(int i=0;i<k;i++) {
            for (int j=0;j < size-1; j++) {
                if (input[size-j-1] < input[size-j-2]) {
                    int tmp = input[size-j-1];
                    input[size-j-1] = input[size-j-2];
                    input[size-j-2] = tmp;
                }
            }
            result.push_back(input[i]);
        }
        return result;
    }
};
