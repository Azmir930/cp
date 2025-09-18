#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a = 0;
    ll b = 0;
    ll c = 0;
    for (int i = 1; i <= 3; i++)
    {
        string s;
        cin >> s;

        if (s == "A>B")
        {
            a++;
        }
        else if (s == "B<A")
        {
            a++;
        }
        else if (s == "A>C")
        {
            a++;
        }
        else if (s == "C<A")
        {
            a++;
        }
        else if (s == "A<B")
        {
            b++;
        }
        else if (s == "B>A")
        {
            b++;
        }
        else if (s == "B>C")
        {
            b++;
        }
        else if (s == "C<B")
        {
            b++;
        }
        else
        {
            c++;
        }
    }

    if (a == 2 && b == 1 && c == 0)
    {
        cout << "CBA";
    }
    else if (a == 2 && c == 1 && b == 0)
    {
        cout << "BCA";
    }
    else if (b == 2 && a == 1 && c == 0)
        cout << "CAB";
    else if (b == 2 && c == 1 && a == 0)
    {
        cout << "ACB";
    }
    else if (c == 2 && a == 1 && b == 0)
        cout << "BAC";
    else if (c == 2 && b == 1 && a == 0)
    {
        cout << "ABC";
    }
    else
    {
        cout << "Impossible";
    }
}