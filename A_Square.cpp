#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

    if (b1 == b2 && b1 == b3 && (l1 + l2 + l3) == b1)
    {
        cout << "YES" << endl;
    }
    else if (l1 == l2 && l1 == l3 && (b1 + b2 + b3) == l1)
    {
        cout << "YES" << endl;
    }
    else if (b1 == (l1 + l2) && b1 == (b2 + b3) && l2 == l3)
    {
        cout << "YES" << endl;
    }
    else if (l1 == (b1 + b2) && l1 == (l2 + l3) && b2 == b3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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