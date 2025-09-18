#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    vector<ll> arr1(n);
    ll a = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {

            arr1[a] = i;
            a++;
        }
    }
    ll s = arr1[a - 1] - arr1[0] + 1;
    if (s <= x)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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