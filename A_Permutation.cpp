#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll sum = 0;
    if (n % 2 == 0)
    {
        for (ll i = n - 1; i > 0; i = i - 2)
        {
            sum = sum + i;
        }
    }
    else
    {
        for (ll i = n - 1; i >= 0; i = i - 2)
        {
            sum = sum + i;
        }
    }
    cout << sum + 1 << endl;
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