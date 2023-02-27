#include <cerrno>
#include <stack>
class Solution {
public:
    void push(int value) {
        if (stack1.empty()) {
            stack1.push(value);
            minstack.push(value);
        }
        else {
            if (value < minstack.top()) {
                stack1.push(value);
                minstack.push(value);
            }
            else {
                stack1.push(value);
                minstack.push(minstack.top());
            }
        }

    }
    void pop() {
        if(stack1.empty()) return;
        stack1.pop();
        minstack.pop();
    }
    int top() {
        if(stack1.empty()) return errno;
        return stack1.top();
    }
    int min() {
        if(stack1.empty()) return errno;
        return minstack.top();
    }
private:
    stack<int> stack1;
    stack<int> minstack;
};
