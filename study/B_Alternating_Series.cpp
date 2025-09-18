#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    bool pos = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (pos)
        {
            cout << -1 << " ";
        }
        else
        {
            cout << 3 << " ";
        }
        pos = !pos;
    }
    if (n % 2 == 0)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << -1 << endl;
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