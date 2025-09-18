#include <iostream>
#include <vector>
using namespace std;

void solve(int n)
{
    vector<int> arr(n + 1);
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < n; ++i)
    {
        if ((i + 2) < n)
        {
            swap(arr[i + 1], arr[i + 2]);
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}
