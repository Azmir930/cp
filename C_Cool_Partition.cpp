#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);
    vector<ll> arr1(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr1[arr[i]]++;
    }

    ll maxFreq = 0;
    for (int i = 1; i <= n; i++)
    {
        maxFreq = max(maxFreq, arr1[i]);
    }

    if (maxFreq == n - 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << n << endl;
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
