#include <bits/stdc++.h>
using namespace std;

char arr[105][105];
int b[100];
int main()
{

    int n, m;
    char c;

    cin >> n >> m >> c;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == c)
            {
                if (arr[i + 1][j] != '.' && arr[i + 1][j] != c)
                {
                    b[arr[i + 1][j]]++;
                }

                if (arr[i - 1][j] != '.' && arr[i - 1][j] != c)
                {
                    b[arr[i - 1][j]]++;
                }
                if (arr[i][j + 1] != '.' && arr[i][j + 1] != c)
                {
                    b[arr[i][j + 1]]++;
                }
                if (arr[i][j - 1] != '.' && arr[i][j - 1] != c)
                {
                    b[arr[i][j - 1]]++;
                }
            }
        }
    }
    int count = 0;
    for (int i = 65; i <= 90; i++)
    {
        if (b[i] != 0)
        {
            count++;
        }
    }
    cout << count << endl;
}