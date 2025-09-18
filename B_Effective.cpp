#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    ll f;
    vector<ll> arr1(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> f;
        arr1[f] = i;
    }
    ll m;
    cin >> m;
    ll a = 0, c = 0;
    for (ll i = 1; i <= m; i++)
    {
        ll b;
        cin >> b;
        a += arr1[b];
        c += n - arr1[b] + 1;
    }
    cout << a << " " << c << endl;
}