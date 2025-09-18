#include <bits/stdc++.h>
using namespace std;
void solve(int t)
{
    int n = ceil((double)t / 7);
    string s = "ROYGBIV";

    for (int i = 7; i < t; i++)
    {
        s += s[i - 4];
    }
    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    solve(t);
}