/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 *	ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
#include <stack>
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param pHead ListNode类 
     * @param k int整型 
     * @return ListNode类
     */
    ListNode* FindKthToTail(ListNode* pHead, int k) {
        // write code here
        int size =0;
        ListNode* myhead = pHead;
        for(;pHead;size++) {
            pHead = pHead->next;
        }
        if(k>size) return {};
        pHead = myhead;
        for(int i=0;i<size-k;i++) {
            pHead = pHead->next;
        }
        return pHead;
    }
};
