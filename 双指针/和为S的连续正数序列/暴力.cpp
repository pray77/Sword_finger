#include <vector>
class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        if(sum<3) return {};
        vector<vector<int> > result;
        for(int n=1;n<50;n++) {
            for(int x=2;x<14;x++) {
                if (x * n + (x*(x-1))/2 == sum) {
                    vector<int> tmp;
                    for (int i=0;i<x;i++) {
                        tmp.push_back(n+i);
                    }
                    result.push_back(tmp);
                }
            }
        }
        return result;
    }
};
