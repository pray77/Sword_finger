/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
#include <stack>
#include <vector>
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        stack<int> tmp;
        if(head==NULL) return {};
        while(head->next) {
            tmp.push(head->val);
            head = head ->next;
        }
        tmp.push(head->val);
        vector<int> result;
        int n = tmp.size();
        for(int i=0;i<n;i++) {
            result.push_back(tmp.top());
            tmp.pop();
        }
        return result;
    }
};
