#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    vector<int> arr(n + 1);
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {

        ans += arr[i] - arr[i + 1];
        temp = min(temp, ans);
    }
    if (temp < 0)
    {
        cout << temp * -1;
    }
    else
    {
        cout << 0;
    }
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}