#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    ll sum = 0;
    ll a1 = a, b1 = b;

    if (a < b && y % 2 == 0)
    {
        if (x > y)
        {
            for (int i = 0; i < b - a; i++)
            {
                sum += x;
            }
        }
        for (int i = 0; i < b - a; i++)
        {
            if (i % 2 == 0)
            {
                sum += x;
            }
            else
            {
                sum += y;
            }
        }
    }
    else if (a < b && x < y)
    {
        sum = (b - a) * x;
    }
    else
    {
        if (x % 2 == 0 && y % 2 == 1)
        {
            for (int i = 0; i < b - a; i++)
            {
                if
            }
        }
    }
    cout << sum << endl;
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