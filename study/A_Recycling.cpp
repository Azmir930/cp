#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); // sort in ascending order

    ll total = 0;
    ll count = 0;

    for (ll i = 0; i < n; i++)
    {
        if (total + arr[i] <= c)
        {
            total += arr[i];
            count++;
        }
        else
        {
            break;
        }
    }

    cout << n - count << endl; // number of removed items
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
