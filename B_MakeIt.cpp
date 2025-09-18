#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<tuple<int, int, int>> operations;

        for (int i = 1; i <= n; ++i)
        {
            if (i % 2 == 1)
            {
                // Reverse the entire row
                operations.emplace_back(i, 1, n);
            }
        }

        // Output number of operations
        cout << operations.size() << "\n";
        for (auto &[i, l, r] : operations)
        {
            cout << i << " " << l << " " << r << "\n";
        }
    }

    return 0;
}
