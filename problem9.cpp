//p69用两个栈实现队列
class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if(stack2.size() == 0)
        {
            while(!stack1.empty())
            {
                int t = stack1.top();
                stack1.pop();
                stack2.push(t);   
            }
        }
        if(stack2.size() == 0) puts("Error");
        int data = stack2.top();
        stack2.pop();
        return data;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};