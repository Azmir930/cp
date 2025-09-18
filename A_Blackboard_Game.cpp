#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Alice" << endl;
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