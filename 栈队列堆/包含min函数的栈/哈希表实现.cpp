#include <cerrno>
#include <stack>
class Solution {
public:
    void push(int value) {
        stack1.push(value);
        if (value>=0)
         hashmap[value] += 1;
        else {
         value = 10000 - value;
         hashmap[value] += 1;
        }

    }
    void pop() {
        if(stack1.empty()) return;
        if (stack1.top()>0) hashmap[stack1.top()] -= 1;
        else
         hashmap[10000-stack1.top()] -= 1;
        stack1.pop();
    }
    int top() {
        return stack1.top();
    }
    int min() {
        if(stack1.empty()) return errno;
        for(int i=20000;i >=10000 ; i--) {
            if (hashmap[i]) return 10000-i;
        }
        for(int i=0;i <= 10000 ; i++) {
            if (hashmap[i]) return i;
        }
        return errno;
    }
private:
    stack<int> stack1;
    int hashmap[20001]={};
};
