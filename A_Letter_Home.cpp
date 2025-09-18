#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll t, ll s)
{
    vector<ll> arr(s);
    for (int i = 0; i < s; ++i)
    {
        cin >> arr[i];
    }

    ll sum = 0, temp = t;
    for (int i = s - 1; i >= 0; i--)
    {
        sum += abs(temp - arr[i]);
        temp = arr[i];
    }
    ll sum1 = 0, temp1 = t;
    for (int i = 0; i < s; i++)
    {
        sum1 += abs(temp1 - arr[i]);

        temp1 = arr[i];
    }

    cout << min(sum, sum1) << endl;
}

int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll s, t;
        cin >> s >> t;
        solve(t, s);
    }
    return 0;
}
