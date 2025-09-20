#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> ar(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        ar[a]++;
        ar[b]++;
    }
    int count = 0;
    int count1 = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (ar[i] > 1)
        {
            count++;
        }
        else
        {
            count1++;
        }
    }
    cout << min(count, count1) << endl;
}