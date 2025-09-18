#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s, t;
    cin >> s;
    vector<int> arr(10);
    for (int i = 0; i < s.size(); i++)
    {
        arr[s[i] - '0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        int cur = 9 - i;
        for (int j = cur; j <= 9; j++)
        {
            if (arr[j] > 0)
            {
                t += (j + '0');
                arr[j]--;
                break;
            }
        }
    }

    cout << t << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
