/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
*/
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode) {
        if(pNode->right) {
            TreeLinkNode* tmp = pNode->right;
            while (tmp->left) {
                tmp = tmp->left;
            }
            return tmp;
        }
        else {
            while(pNode->next) {
                TreeLinkNode* tmp = pNode->next;
                if(tmp->left==pNode) {
                    return tmp;
                }
                pNode = pNode->next;
            }
        }
        return {};
    }
};
