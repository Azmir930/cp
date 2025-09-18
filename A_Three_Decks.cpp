#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if ((a + b + c) % 3 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        ll s = (a + b + c) / 3;
        if (b > s)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
int main()
{
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        solve();
    }
}