class Solution
{
public:
    void push(int node) {
        if(!stack2.empty()){
            while(!stack2.empty()){
                stack1.push(stack2.top());
                stack2.pop();
            }
        }
        stack1.push(node);
    }

    int pop() {
        if(!stack1.empty()){
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        int t=stack2.top();
        stack2.pop();
        return t;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
