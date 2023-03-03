
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
#include <climits>
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead) {
        if(!pHead || !pHead->next) return pHead;
        ListNode* pHead1 = new ListNode(1001);
        ListNode* result = pHead1;
        vector<int> vec;
        pHead1->next=pHead;
        //while(pHead1->next) {
        ListNode* tmp = pHead1;
        while(tmp->next) {
            if((tmp->val != tmp->next->val)) {
                if (!(tmp->next->next))
                 vec.push_back(tmp->next->val);
                else if(tmp->next->val != tmp->next->next->val)
                 vec.push_back(tmp->next->val); 
            }
            tmp = tmp->next;
        }
        if(vec.empty()) return {};
        for(int x : vec) {
            ListNode* pHead2 = new ListNode(x);
            pHead1 ->next = pHead2;
            pHead1 = pHead2;
        }
        return result->next;
    }
};
