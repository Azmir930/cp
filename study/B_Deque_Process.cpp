#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll last = -1;
    ll l = 0, r = n - 1;
    while (l < r)
    {
        ll sing = (arr[l] - arr[r]) / abs(arr[l] - arr[r]);
        if (sing == last)
        {
            cout << "RL";
            l++;
            r--;
            last = -last;
        }
        else
        {
            cout << "LR";
            last = -last;
            l++;
            r--;
        }
    }
    if (n % 2 != 0)
    {
        cout << "L" << endl;
    }
    else
    {
        cout << endl;
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