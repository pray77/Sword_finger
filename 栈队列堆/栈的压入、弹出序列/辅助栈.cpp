#include <stack>
class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int> mystack;
        int j=0;
        mystack.push(0);
        if(pushV.size()==0) return false;
        for (int i = 0;i < popV.size();i++) {
                for(;mystack.top() != popV[i];j++) {
                    if(j>=pushV.size()) return false;
                    mystack.push(pushV[j]);
                }
                mystack.pop();
        }
        return true;
    }
};
