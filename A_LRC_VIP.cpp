#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        vector<int> arr(t);

        for (int j = 0; j < t; j++)
        {
            cin >> arr[j];
        }
        vector<int> temp = arr;
        sort(arr.begin(), arr.end());
        if (arr[0] == arr[t - 1])
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            int max = arr[t - 1];
            cout << "YES" << endl;
            for (int j = 0; j < t; j++)
            {
                if (temp[j] == max)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << 2 << " ";
                }
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}