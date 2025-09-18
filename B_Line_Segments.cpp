#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    double px, py, qx, qy;
    cin >> px >> py >> qx >> qy;
    vector<double> ar(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    double d = sqrt((px - qx) * (px - qx) + (py - qy) * (py - qy));
    double max1 = d;
    double sum = d;
    for (ll i = 0; i < n; i++)
    {
        max1 = max(max1, ar[i]);
        sum = sum + ar[i];
    }

    if (sum - max1 < max1)
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