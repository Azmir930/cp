#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n), pmin(n), smax(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pmin[0] = arr[0];
    for (ll i = 1; i < n; i++)
    {
        pmin[i] = min(pmin[i - 1], arr[i]);
    }

    smax[n - 1] = arr[n - 1];
    for (ll i = n - 2; i >= 0; --i)
    {
        smax[i] = max(smax[i + 1], arr[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == pmin[i] || arr[i] == smax[i])
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }
    cout << endl;
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
