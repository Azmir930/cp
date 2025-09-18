#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    for (ll j = 0; j < n; j++)
    {
        ll t, k;
        cin >> t >> k;
        vector<ll> arr(t);
        for (ll i = 0; i < t; i++)
        {
            cin >> arr[i];
        }
        ll sum = accumulate(arr.begin(), arr.end(), 0LL);
        sort(arr.begin(), arr.end());
        arr[t - 1]--;
        sort(arr.begin(), arr.end());

        if ((arr[t - 1] - arr[0]) > k || sum % 2 == 0)
        {
            cout << "Jerry" << endl;
        }
        else
        {
            cout << "Tom" << endl;
        }
    }
}
int main()
{
    ll n;
    cin >> n;
    solve(n);
}