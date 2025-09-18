#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, j, k;
    cin >> n >> j >> k;
    set<ll> arr;
    ll k1;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.insert(x);
        if (i + 1 == j)
        {
            k1 = x;
        }
    }
    ll count = 0;

    if (k == 1 && k1 == *arr.rbegin())
    {
        cout << "YES" << endl;
    }
    else if (k >= 2)
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