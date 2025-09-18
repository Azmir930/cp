#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll a, x, y;
    cin >> a >> x >> y;
    if (x < y)
    {
        swap(x, y);
    }

    if (a <= x && a >= y)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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