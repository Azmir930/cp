#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string r;
    int i = 0;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            r = s[i] + r;
        }
        else
        {
            r += s[i];
        }
        i++;
        n--;
    }
    cout << r;
    return 0;
}
