#include <bits/stdc++.h>
using namespace std;

void reverseFirstK(queue<int> &q, int k)
{
    if (q.empty() || k > (int)q.size() || k <= 0)
        return;

    stack<int> s;

    for (int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    int t = q.size() - k;
    for (int i = 0; i < t; i++)
    {
        q.push(q.front());
        q.pop();
    }
}

void printQueue(const queue<int> &q)
{
    queue<int> temp = q;
    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    int k = 3;

    cout << "Original queue: ";
    printQueue(q);

    reverseFirstK(q, k);

    cout << "Reverse" << endl;
    printQueue(q);

    return 0;
}
