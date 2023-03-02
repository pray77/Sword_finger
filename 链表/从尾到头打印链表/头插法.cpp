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
        ListNode* head1=NULL;
        vector<int> result;
        while(head) {
            ListNode* tmp = head->next;
            head->next = head1;
            head1 = head;
            head = tmp;
        }
        while(head1) {
            result.push_back(head1->val);
            head1 = head1 ->next;
        }
        return result;
    }
};
