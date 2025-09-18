#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll row, cols, k, t;
    cin >> row >> cols >> k >> t;

    vector<ll> arr(k);
    for (ll i = 0; i < k; i++)
    {
        ll a, b;
        cin >> a >> b;
        arr[i] = (a - 1) * cols + b;
    }
    sort(arr.begin(), arr.end());

    for (ll i = 0; i < t; i++)
    {
        ll a, b;
        cin >> a >> b;
        ll ind = (a - 1) * cols + b;
        ll ind_c = 0, f = 0;

        for (ll j = 0; j < arr.size(); j++)
        {
            if (arr[j] < ind)
                ind_c++;
            else if (arr[j] == ind)
            {
                f = 1;
                cout << "Waste" << endl;
                break;
            }
            else
                break;
        }

        if (!f)
        {
            int ans = (ind - ind_c) % 3;
            if (ans == 1)
                cout << "Carrots" << endl;
            else if (ans == 2)
                cout << "Kiwis" << endl;
            else
                cout << "Grapes" << endl;
        }
    }
}
