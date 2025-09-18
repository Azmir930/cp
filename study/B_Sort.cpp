#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

vector<ll> arr(100001);
vector<ll> temp(100001);

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp[i] = arr[i];
    }

    sort(arr.begin(), arr.begin() + n);

    ll first = -1, second = -1;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] != temp[i])
        {
            if (first == -1)
                first = i;
            second = i + 1;
        }
    }

    reverse(temp.begin() + first, temp.begin() + second);

        if (is_sorted(temp.begin(), temp.begin() + n))
    {
        cout << "yes" << endl;
        if (first == -1)
            first = 0;
        if (second == -1)
            second = 1;
        cout << first + 1 << " " << second << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}

int main()
{
    solve();
    return 0;
}
