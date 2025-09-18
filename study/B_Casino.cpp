#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int count = 0;
        int count1 = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                count1++;
                if (count1 == k)
                {
                    count++;
                }
                else if (count1 == k + 1)
                {
                    count1 = 0;
                }
            }
            else if (arr[i] == 1)
            {
                count1 = 0;
            }
        }
        cout << count << endl;
    }
}