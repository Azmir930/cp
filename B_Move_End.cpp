#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll t;
    cin >> t;
    vector<ll> arr(t + 1);
    vector<ll> arr1(t + 1);
    ll max1 = 0;

    for (int i = 1; i <= t; i++)
    {
        cin >> arr[i];
        max1 = max(arr[i], max1);
        arr1[i] = max1;
    }
    ll sum = 0;
    for (int i = t; i > 0; i--)
    {
        cout << sum + arr1[i] << " ";
        sum += arr[i];
    }
    cout << endl;
}
int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}