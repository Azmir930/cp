#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n);
    for (ll i = 0; i < m; i++)
    {
        arr[i] = 1;
    }
    for (ll i = m; i < n; i++)
    {
        arr[i] = 0;
    }
    for (ll i = 0; i < n; i++)
    {
        cout << arr[i];
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