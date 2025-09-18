#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll t;
    cin >> t;
    string s;
    cin >> s;
    ll flag = 0;
    for (int i = 1; i < t - 1; i++)
    {
        if (s[0] == s[i] || s[t - 1] == s[i])
        {
            flag = 1;
            break;
        }
    }
    bool hasDuplicate = false;
    set<char> seen;
    for (int i = 1; i < t - 1; i++)
    {
        if (seen.count(s[i]))
        {
            hasDuplicate = true;
            break;
        }
        seen.insert(s[i]);
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        if (hasDuplicate)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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