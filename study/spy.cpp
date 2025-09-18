#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x;

    cin >> x;


    if(x<2) cout << -1 << endl;
    else if(x<=1000000) cout << "1 1 " << x-1 << endl;
    else{
        long long c = x%1000000;

        x-=c;

        long long b = x/1000000;

        cout << 1000000 << " " << b << " " << c << endl;
    }
}

int main()
{
    int n;
     cin >> n;

     while(n--){
    solve();
     }

    return 0;
}
