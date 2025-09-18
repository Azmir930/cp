#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll h = arr[k - 1];
    ll flag = 0;
    ll t = 0;
    sort(arr.begin(), arr.end());
    auto it = find(arr.begin(), arr.end(), h);
    for (int i = it - arr.begin(); i < n - 1; i++)
    {
        t = t + (arr[i + 1] - arr[i]);
        if (t > arr[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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