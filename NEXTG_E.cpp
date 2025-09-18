#include <bits/stdc++.h>
using namespace std;

void printNextGreaterElements(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);

    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && arr[i] > s.top())
        {
            cout << s.top() << " -> " << arr[i] << endl;
            s.pop();
        }
        s.push(arr[i]);
    }

    while (!s.empty())
    {
        cout << s.top() << " -> " << -1 << endl;
        s.pop();
    }
}

int main()
{
    int arr[] = {4, 5, 2, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    printNextGreaterElements(arr, n);

    return 0;
}
