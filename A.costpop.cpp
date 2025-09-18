#include <bits/stdc++.h>
using namespace std;

class Stack_CostlyPop
{
    queue<int> q1, q2;

public:
    void push(int x)
    {
        q1.push(x);
    }

    void pop()
    {
        if (q1.empty())
        {
            cout << "Stack is empty, cannot pop." << endl;
            return;
        }

        while (q1.size() > 1)
        {
            int val = q1.front();
            q1.pop();
            q2.push(val);
        }

        q1.pop();

        swap(q1, q2);
    }

    void top()
    {
        if (q1.empty())
        {
            cout << "Stack is empty." << endl;
            return;
        }

        int val;

        while (q1.size() > 1)
        {
            int temp = q1.front();
            q1.pop();
            q2.push(temp);
        }

        val = q1.front();
        q1.pop();

        q2.push(val);

        swap(q1, q2);

        cout << "Top: " << val << endl;
    }

    bool empty()
    {
        return q1.empty();
    }
};

int main()
{
    Stack_CostlyPop st;
    st.push(5);
    st.push(15);
    st.push(25);
    st.top();
    st.pop();
    st.top();
    st.pop();
    st.top();
    st.pop();
    st.top();
}
