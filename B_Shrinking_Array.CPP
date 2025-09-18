#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll s;
    cin >> s;
    vector<ll> arr(s);
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    ll flag = -1;
    for (int i = 0; i < s - 1; i++)
    {
        if (abs(arr[i] - arr[i + 1]) <= 1)
        {
            flag = 0;
            break;
        }
    }
    if (!flag)
    {
        cout << "0" << endl;
        return;
    }
    else
    {
        for (int i = 1; i < s - 1; i++)
        {
            if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
            {
                flag = 1;
                break;
            }
            else if (arr[i] < arr[i + 1] && arr[i] < arr[i - 1])
            {
                flag = 1;
                break;
            }
        }
        cout << flag << endl;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}