#include <iostream>
using namespace std;

class CharStack
{
private:
    char arr[100];
    int top;

public:
    CharStack()
    {
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == 99;
    }

    void push(char value)
    {
        if (isFull())
        {
            cout << "Stack is Full" << endl;
            return;
        }
        arr[++top] = value;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        top--;
    }

    char peek()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return '\0';
        }
        return arr[top];
    }
};
int main()
{
    CharStack st;
    string str = "HELLO";

    for (int i = 0; i < str.length(); i++)
    {
        st.push(str[i]);
    }

    string reversed = "";
    while (!st.isEmpty())
    {
        reversed += st.peek();
        st.pop();
    }

    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << reversed << endl;

    return 0;
}
