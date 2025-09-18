#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) cin >> grid[i];

    // store positions
    map<char, vector<pair<int,int>>> pos;
    vector<pair<int,int>> shiftPos;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c = grid[i][j];
            if (c == 'S') shiftPos.push_back({i, j});
            else pos[c].push_back({i, j});
        }
    }

    int q;
    cin >> q;
    string s;
    cin >> s;

    int ans = 0;

    for (char ch : s) {
        if (islower(ch)) {
            if (pos[ch].empty()) {
                cout << -1 << endl;
                return 0;
            }
        } else { // uppercase
            char lower = tolower(ch);
            if (pos[lower].empty()) {
                cout << -1 << endl;
                return 0;
            }
            if (shiftPos.empty()) {
                cout << -1 << endl;
                return 0;
            }

            // check if there exists shift within distance ≤ x
            bool ok = false;
            for (auto [a,b] : pos[lower]) {
                for (auto [c,d] : shiftPos) {
                    long long dist2 = 1LL*(a-c)*(a-c) + 1LL*(b-d)*(b-d);
                    if (dist2 <= 1LL*x*x) {
                        ok = true;
                        break;
                    }
                }
                if (ok) break;
            }
            if (!ok) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
