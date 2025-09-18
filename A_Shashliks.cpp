#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solv1(ll k, ll a, ll x, ll b, ll y)
{
    ll cnt1 = 0, cnt2 = 0;

    if (k >= a)
    {
        cnt1 = (k - a) / x + 1;
        k -= cnt1 * x;
    }

    if (k >= b)
    {
        cnt2 = (k - b) / y + 1;
        k -= cnt2 * y;
    }

    return cnt1 + cnt2;
}

void solve()
{
    ll k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;
    ll res1 = solv1(k, a, x, b, y);
    ll res2 = solv1(k, b, y, a, x);
    cout << max(res1, res2) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
