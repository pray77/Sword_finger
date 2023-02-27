#include <cerrno>
#include <exception>
class Solution
{
public:
    void push(int node) {
        stack1.push(node);

    }

    int pop() {
        int n;
        if(stack2.empty()) {
            while(!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        if(stack2.empty()) return 0;
        n = stack2.top();
        stack2.pop();
        return n;
    }


private:
    stack<int> stack1;
    stack<int> stack2;
};
