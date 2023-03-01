#include <vector>
class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        if((array.size()<2) || (sum < array[0]) || (sum > (array[array.size()-1] + array[array.size()-2]))) return {};
        int i=0,j=array.size()-1;
        while(i<j) {
            if (array[i] + array[j] == sum) {
                return {array[i],array[j]};
            }
            else if (array[i] + array[j] < sum) i++;
            else j--;
        }
        return {};
    }
};
