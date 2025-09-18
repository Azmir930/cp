#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(string postfix)
{
    stack<int> s;
    stringstream ss(postfix);
    string token;

    while (ss >> token)
    {
        if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-'))
        {
            s.push(stoi(token));
        }
        else
        {
            int b = s.top();
            s.pop();
            int a = s.top();
            s.pop();
            int res = 0;
            if (token == "+")
                res = a + b;
            else if (token == "-")
                res = a - b;
            else if (token == "*")
                res = a * b;
            else if (token == "/")
                res = a / b;
            s.push(res);
        }
    }

    return s.top();
}

int main()
{
    string postfix;
    getline(cin, postfix);

    int result = evaluatePostfix(postfix);
    cout << "Result: " << result << endl;

    return 0;
}
