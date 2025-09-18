#include <bits/stdc++.h>
using namespace std;

int precedence(char per)
{
    if (per == '*' || per == '/')
        return 2;
    if (per == '+' || per == '-')
        return 1;
    return 0;
}
string infixToPostfix(string infix)
{
    stack<char> s;
    string postfix;

    for (char c : infix)
    {
        if (isdigit(c))
        {
            postfix += c;
        }
        else if (c == '(')
        {
            s.push(c);
        }
        else if (c == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/')
        {
            while (!s.empty() && precedence(s.top()) >= precedence(c))
            {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int Postfix(string pofix)
{
    stack<int> s;

    for (char c : pofix)
    {
        if (isdigit(c))
        {
            s.push(c - '0');
        }
        else
        {
            int b = s.top();
            s.pop();
            int a = s.top();
            s.pop();
            int result;

            if (c == '+')
                result = a + b;
            else if (c == '-')
                result = a - b;
            else if (c == '*')
                result = a * b;
            else if (c == '/')
                result = a / b;

            s.push(result);
        }
    }

    return s.top();
}
int main()
{
    string infix;
    cin >> infix;

    string pofix = infixToPostfix(infix);
    cout << "Postfix: " << pofix << endl;

    int result = Postfix(pofix);
    cout << "Result: " << result << endl;

    return 0;
}
