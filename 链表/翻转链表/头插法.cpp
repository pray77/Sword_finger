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
		ListNode* myhead = new ListNode(0);
		while(pHead) {
			ListNode* tmp = pHead ->next;
			pHead -> next = myhead->next;
			myhead ->next = pHead;
			pHead = tmp;
		}
		return myhead->next;
    }
};
