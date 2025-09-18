#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    for (int K = 0; K < n; K++)
    {
        ll num;
        cin >> num;
        vector<ll> arr(3);
        ll count = 0;
        while (arr[0] != num || arr[1] != num || arr[2] != num)
        {
            if (arr[1] * 2 + 1 >= num)
            {
                if (arr[0] != num)
                {
                    arr[0] = num;
                    count++;
                }
            }
            else
            {
                arr[0] = arr[1] * 2 + 1;
                count++;
            }
            if (arr[2] * 2 + 1 >= num)
            {
                if (arr[1] != num)
                {
                    arr[1] = num;
                    count++;
                }
            }
            else
            {
                arr[1] = arr[2] * 2 + 1;
                count++;
            }
            if (arr[0] * 2 + 1 >= num)
            {
                if (arr[2] != num)
                {
                    arr[2] = num;
                    count++;
                }
            }
            else
            {
                arr[2] = arr[0] * 2 + 1;
                count++;
            }
        }
        cout << count << endl;
    }
}
int main()
{
    ll n;
    cin >> n;
    solve(n);
}