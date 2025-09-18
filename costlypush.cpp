#include <bits/stdc++.h>
using namespace std;

class Stack_CostlyPush
{
    queue<int> q1, q2;

public:
    void push(int x)
    {

        q2.push(x);

        while (!q1.empty())
        {
            int val = q1.front();
            q1.pop();
            q2.push(val);
        }

        swap(q1, q2);
    }

    void pop()
    {
        if (q1.empty())
        {
            cout << "Stack is empty, cannot pop." << endl;
        }
        else
        {
            q1.pop();
        }
    }

    void top()
    {
        if (q1.empty())
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            cout << "Top: " << q1.front() << endl;
        }
    }

    bool empty()
    {
        return q1.empty();
    }
};

int main()
{
    Stack_CostlyPush st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.top();
    st.pop();
    st.top();
    st.pop();
    st.top();
    st.pop();
    st.top();
}
