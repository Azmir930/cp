#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value, weight, priority;
};

bool cmp(Item a, Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    if (fabs(r1 - r2) < 1e-9)
        return a.priority > b.priority;
    return r1 > r2;
}

double knapsack(int W, Item arr[], int n)
{
    sort(arr, arr + n, cmp);
    double total = 0;
    int curW = 0;

    for (int i = 0; i < n; i++)
    {
        if (curW + arr[i].weight <= W)
        {
            curW += arr[i].weight;
            total += arr[i].value;
        }
        else
        {
            int remain = W - curW;
            total += (double)arr[i].value * remain / arr[i].weight;
            break;
        }
    }
    return total;
}

int main()
{
    Item arr[3] = {{60, 10, 2}, {100, 20, 1}, {120, 30, 3}};
    int W = 50;
    cout << "Maximum Value = " << knapsack(W, arr, 3) << endl;
}

// 2
#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value, weight;
};

bool cmp(Item a, Item b)
{
    return (double)a.value / a.weight > (double)b.value / b.weight;
}

double minWeight(int V, Item arr[], int n)
{
    sort(arr, arr + n, cmp);
    double totalWeight = 0;
    int curValue = 0;

    for (int i = 0; i < n; i++)
    {
        if (curValue + arr[i].value <= V)
        {
            curValue += arr[i].value;
            totalWeight += arr[i].weight;
        }
        else
        {
            int remain = V - curValue;
            totalWeight += (double)arr[i].weight * remain / arr[i].value;
            break;
        }
    }
    return totalWeight;
}

int main()
{
    Item arr[3] = {{60, 10}, {100, 20}, {120, 30}};
    int V = 150;
    cout << "Minimum Weight = " << minWeight(V, arr, 3) << endl;
}
// 3
#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value, weight;
};

bool cmp(Item a, Item b)
{
    return (double)a.value / a.weight > (double)b.value / b.weight;
}

double dualKnapsack(int W1, int W2, Item arr[], int n)
{
    sort(arr, arr + n, cmp);
    int w1 = 0, w2 = 0;
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        if (w1 + arr[i].weight <= W1)
        {
            w1 += arr[i].weight;
            total += arr[i].value;
        }
        else if (w2 + arr[i].weight <= W2)
        {
            w2 += arr[i].weight;
            total += arr[i].value;
        }
        else
        {
            if (w1 < W1)
            {
                int remain = W1 - w1;
                total += (double)arr[i].value * remain / arr[i].weight;
                w1 = W1;
            }
            else if (w2 < W2)
            {
                int remain = W2 - w2;
                total += (double)arr[i].value * remain / arr[i].weight;
                w2 = W2;
            }
        }
    }
    return total;
}

int main()
{
    Item arr[3] = {{60, 10}, {100, 20}, {120, 30}};
    cout << "Max Value = " << dualKnapsack(50, 50, arr, 3) << endl;
}
// 4
#include <bits/stdc++.h>
using namespace std;

int minCoins(int amount, pair<int, int> coins[], int n)
{
    sort(coins, coins + n, greater<pair<int, int>>());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int denom = coins[i].first;
        int supply = coins[i].second;
        while (amount >= denom && supply > 0)
        {
            amount -= denom;
            count++;
            supply--;
        }
    }
    if (amount > 0)
        return -1;
    return count;
}

int main()
{
    pair<int, int> coins[3] = {{10, 2}, {5, 3}, {1, 5}};
    int X = 28;
    int ans = minCoins(X, coins, 3);
    if (ans == -1)
        cout << "Not Possible\n";
    else
        cout << "Minimum coins = " << ans << endl;
}
// 5
#include <bits/stdc++.h>
using namespace std;

int greedy(int X, int coins[], int n)
{
    sort(coins, coins + n, greater<int>());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        while (X >= coins[i])
        {
            X -= coins[i];
            count++;
        }
    }
    return count;
}

int dpOptimal(int X, int coins[], int n)
{
    vector<int> dp(X + 1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= X; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= coins[j])
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
        }
    }
    return dp[X];
}

int main()
{
    int coins[3] = {1, 3, 4};
    int X = 6;
    cout << "Greedy: " << greedy(X, coins, 3) << endl;
    cout << "Optimal: " << dpOptimal(X, coins, 3) << endl;
}
// 6
#include <bits/stdc++.h>
using namespace std;

int minCoinsFee(int amount, int coins[], int n)
{
    sort(coins, coins + n, greater<int>());
    int transactions = 0;
    for (int i = 0; i < n; i++)
    {
        while (amount >= coins[i])
        {
            amount -= coins[i];
            transactions += 2; // coin + fee
        }
    }
    return transactions;
}

int main()
{
    int coins[3] = {1, 5, 10};
    int X = 18;
    cout << "Min transactions = " << minCoinsFee(X, coins, 3) << endl;
}
// 7
#include <bits/stdc++.h>
using namespace std;

int minRooms(int start[], int end[], int n)
{
    sort(start, start + n);
    sort(end, end + n);
    int i = 0, j = 0, rooms = 0, maxRooms = 0;
    while (i < n && j < n)
    {
        if (start[i] < end[j])
        {
            rooms++;
            i++;
            if (rooms > maxRooms)
                maxRooms = rooms;
        }
        else
        {
            rooms--;
            j++;
        }
    }
    return maxRooms;
}

int main()
{
    int start[3] = {0, 5, 15};
    int end[3] = {30, 10, 20};
    cout << "Minimum rooms = " << minRooms(start, end, 3) << endl;
}
// 8
#include <bits/stdc++.h>
using namespace std;

struct Activity
{
    int s, e, p;
};
bool cmp(Activity a, Activity b) { return a.e < b.e; }

int maxProfit(Activity arr[], int n)
{
    sort(arr, arr + n, cmp);
    int lastEnd = -1, profit = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].s >= lastEnd)
        {
            profit += arr[i].p;
            lastEnd = arr[i].e;
        }
    }
    return profit;
}

int main()
{
    Activity arr[3] = {{1, 3, 50}, {3, 5, 20}, {6, 9, 100}};
    cout << "Max Profit = " << maxProfit(arr, 3) << endl;
}
// 9
#include <bits/stdc++.h>
using namespace std;

struct Activity
{
    int s, e, p;
};
bool cmp(Activity a, Activity b) { return a.e < b.e; }

int maxProfitBreak(Activity arr[], int n, int K)
{
    sort(arr, arr + n, cmp);
    vector<int> dp(n);
    dp[0] = arr[0].p;
    for (int i = 1; i < n; i++)
    {
        int incl = arr[i].p;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j].e + K <= arr[i].s)
            {
                incl += dp[j];
                break;
            }
        }
        dp[i] = max(incl, dp[i - 1]);
    }
    return dp[n - 1];
}

int main()
{
    Activity arr[3] = {{1, 3, 50}, {4, 6, 60}, {7, 9, 70}};
    int K = 1;
    cout << "Max Profit with Break = " << maxProfitBreak(arr, 3, K) << endl;
}
