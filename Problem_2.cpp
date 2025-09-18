#include <bits/stdc++.h>
using namespace std;

void reverseFirstK(queue<int> &q, int k)
{

    if (q.empty() || k > (int)q.size() || k <= 0)
    {
        cout << "Invalid value of k. No changes made to the queue." << endl;
        return;
    }

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

    int remaining = q.size() - k;
    for (int i = 0; i < remaining; i++)
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

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;

    cout << "Original queue: ";
    printQueue(q);

    reverseFirstK(q, k);

    cout << "Queue after reversing first " << k << " elements: ";
    printQueue(q);

    return 0;
}
