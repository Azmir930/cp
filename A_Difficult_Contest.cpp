#include <iostream>
using namespace std;
typedef long long ll;

void solve(string s)
{
    if (s.size() < 3)
    {
        cout << s << endl;
        return;
    }

    bool flag = false;
    for (ll i = 0; i <= s.size() - 3; i++)
    {
        if ((s[i] == 'F' && s[i + 1] == 'F' && s[i + 2] == 'T') ||
            (s[i] == 'N' && s[i + 1] == 'T' && s[i + 2] == 'T'))
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        ll F = 0, T = 0, N = 0;
        string s1 = "";

        for (char c : s)
        {
            if (c == 'F')
                F++;
            else if (c == 'T')
                T++;
            else if (c == 'N')
                N++;
            else
                s1 += c;
        }

        string result = "";
        result += string(T, 'T');
        result += string(F, 'F');
        result += string(N, 'N');
        result += s1;

        cout << result << endl;
    }
    else
    {

        cout << s << endl;
    }
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }

    return 0;
}
