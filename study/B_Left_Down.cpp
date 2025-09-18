#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;
    ll mx = max(a, b);
    ll mn = min(a, b);
    if (mx <= k)
    {
        cout << 1 << endl;
    }
    else
    {
        ll flag = 0;
        for (ll i = 9; i > 1; i--)
        {

            if (mn % i == 0 && mx % i == 0)
            {
                if (max(a / i, b / i) <= k)
                    flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
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