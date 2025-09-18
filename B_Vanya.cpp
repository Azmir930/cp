#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, l;
    cin >> n >> l;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    double mx = 0;
    for (int i = 0; i < n - 1; i++)
    {
        mx = max(mx, (double)(arr[i + 1] - arr[i]));
    }

    mx = mx / 2.0;

    double left = arr[0] - 0;
    double right = l - arr[n - 1];

    double ans = max(mx, max(left, right));

    cout << fixed << setprecision(10) << ans << endl;
}

int main()
{
    solve();
}
