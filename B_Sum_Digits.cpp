#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(string n)
{
    ll count = 0;
    while (n.length() != 1)
    {

        ll temp = 0;
        for (int i = 0; i < n.length(); i++)
        {
            temp += n[i] - '0';
        }
        count++;
        n = to_string(temp);
    }
    cout << count;
}
int main()
{
    string n;
    cin >> n;
    solve(n);
}