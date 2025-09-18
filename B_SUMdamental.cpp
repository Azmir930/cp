#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, x;
    cin >> n >> x;
    ll a = __builtin_popcount(x);
    if (n <= a)
    {
        cout << x << endl;
    }
    else if ((n - a) % 2 == 0)
    {
        cout << x + n - a << endl;
    }
    else
    {
        if (x > 1)
        {
            cout << x + n - a + 1 << endl;
        }
        else if (x == 1)
        {
            cout << n + 3 << endl;
        }
        else
        {
            if (n == 1)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << n + 3 << endl;
            }
        }
    }
}
int main()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        solve();
    }
}