
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
#include <queue>
#include <set>
#include <unordered_map>
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead) {
        unordered_map<ListNode*,bool> visit;
        while(pHead != 0) {
            if(visit[pHead] == true)
                return pHead;
            visit[pHead]=true;
            pHead = pHead->next;
        }
        return pHead;
    }
};
