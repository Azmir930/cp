#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, s;
    cin >> n >> s;
    ll count = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll dx, dy, x, y;

        cin >> dx >> dy >> x >> y;
        if (dx * dy == -1 && x + y == s)
        {
            count++;
        }
        else if (dx * dy == 1 && x == y)
        {
            count++;
        }
    }
    cout << count << endl;
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