#include <vector>
class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        if(sum<3) return {};
        vector<vector<int> > result;
        int left=1,right=2;
        while(left<right) {
            int target = (left+right)*(right-left+1)/2;
            if(target<sum) right++;
            else if (target>sum) left++;
            else {
                vector<int> tmp;
                for(int i=left;i<=right;i++) {
                    tmp.push_back(i);
                }
                result.push_back(tmp);
                left++;
            }
        }
        return result;
    }
};
