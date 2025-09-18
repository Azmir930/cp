#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    ll g = n;
    ll i = 0;
    vector<ll> arr(1000);

    while (g > 0)
    {
        arr[i] = g % 10;
        g = g / 10;
        i++;
    }

    ll minVal = *min_element(arr.begin(), arr.begin() + i);
    cout << minVal << endl;
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
