#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    char ar[n][m];
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> ar[i][j];
            if(ar[i][j] == 'S') v.push_back({i,j});
        }
    }

    int low[26] = {0}, upp[26] = {0};

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(ar[i][j] != 'S'){
                low[ar[i][j]-'a'] = 1;
                for(auto &p : v){
                    int d = p.first, y = p.second;
                    if((d - i)*(d - i) + (y - j)*(y - j) <= x*x){
                        upp[ar[i][j]-'a'] = 1;
                    }
                }
            }
        }
    }

    int q, c = 0;
    cin >> q;
    char ch;
    for(int i=0; i<q; i++){
        cin >> ch;
        if(ch<'a'){
            if(!v.size() || !low[ch-'A']){
                cout << -1 << endl;
                return 0;
            }
            if(!upp[ch-'A']) c++;
        } else { 
            if(!low[ch-'a']){
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << c << endl;
}
