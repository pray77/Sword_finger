/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead) {
        if(!pHead) return pHead;    // 为空则返回
        RandomListNode* cur = pHead;
        while(cur){
            RandomListNode* tmp = new RandomListNode(cur->label);    // 拷贝节点
            tmp->next = cur->next;
            cur->next = tmp;
            cur = tmp->next;
        }

        RandomListNode *old = pHead, *clone = pHead->next, *ret = pHead->next;
        while(old){
            clone->random = old->random == NULL ? NULL : old->random->next;    // 处理拷贝节点的随机指针
            if(old->next) old = old->next->next;    // 注意特判空指针
            if(clone->next) clone = clone->next->next;
        }

        old = pHead, clone = pHead->next;
        while(old){    // 拆分链表
            if(old->next) old->next = old->next->next;
            if(clone->next) clone->next = clone->next->next;
            old = old->next;
            clone = clone->next;
        }

        return ret;
    }
};
