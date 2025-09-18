#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t; cin>>t;
    while(t--){
        int n,c,ans=0;
        cin>>n>>c;
        vector<int>v;
        int temp;
        for(int i=0; i<n; i++){
            cin>>temp;
            if(temp>c) ans++;
            else v.push_back(temp);
        }
        sort(v.begin(), v.end());
        int multiplier = 1;
        for(int i=v.size()-1; i>=0; i--){
            if(v[i]*multiplier<=c){
                multiplier*=2;
            }
            else ans++;
        }
        cout<<ans<<endl;
    }
}