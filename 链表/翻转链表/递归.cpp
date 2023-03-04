/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
		if(!pHead || !pHead->next) return pHead;
		ListNode* tmp = pHead->next;
		pHead ->next=NULL;
		ListNode* result = ReverseList(tmp);
		tmp->next=pHead;
		return result;
    }
};
