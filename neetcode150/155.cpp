#include <bits/stdc++.h>
using namespace std;

class MinStack
{
private:
    stack<int> st;
    stack<int> minst;

public:
    MinStack()
    {
    }

    void push(int value)
    {
        st.push(value);

        if(minst.empty() || minst.top() >= value){
            minst.push(value);
        }
    }

    void pop()
    {
        if(st.empty()) return;

        if(minst.top() == st.top()){
            minst.pop();
        }

        st.pop();
    }

    int top()
    {
        if(st.empty()) return -1;
        return st.top();
    }

    int getMin()
    {
        if(minst.empty()) return -1;
        return minst.top();
    }
};

int main()
{
    MinStack minStack;
    
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    
    cout << "Current Min: " << minStack.getMin() << "\n"; // Outputs -3
    
    minStack.pop();
    
    cout << "Top element: " << minStack.top() << "\n";    // Outputs 0
    cout << "Current Min: " << minStack.getMin() << "\n"; // Outputs -2

    return 0;
}