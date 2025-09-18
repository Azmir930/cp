#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll t)
{
    vector<ll> f(100);
    f[0] = 0;
    f[1] = 1;
    f[2] = 2;
    for (ll i = 3; i <= 10; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (ll i = 0; i < t; i++)
    {
        ll n, m;
        cin >> n >> m;
        for (ll j = 0; j < m; j++)
        {
            ll w, l, h;
            cin >> w >> l >> h;
            if (min({w, l, h}) < f[n])
            {
                cout << 0;
            }
            else if (max({w, l, h}) >= (f[n] + f[n - 1]))
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
}
int main()
{
    ll t;
    cin >> t;
    solve(t);
}