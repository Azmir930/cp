#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Pow[100003], mod =998244353;
void solve(){
    Pow[0]=1;
    for(ll i=1 ;i <=100000;i++){Pow[i]=(Pow[i-1]+Pow[i-1]) % mod;}
    ll t; cin>>t;
    while(t--){
        ll n;
        cin>>n;

        ll p[n],q[n];
        for(ll i=0;i<n;i++){
            cin>>p[i];
        }
        for(ll i=0;i<n;i++){
            cin>>q[i];
        }
        ll max_p =0, max_q=0, ind_p=0, ind_q=0;
        ll r[n];
        for(ll i=0;i<n;i++){
            max_p = max(max_p, p[i]);
            max_q = max(max_q, q[i]);
            if(max_p==p[i]){ind_p=i;}
            if(max_q==q[i]){ind_q=i;}


            if(p[ind_p]>q[ind_q]){ 
                r[i]=Pow[p[ind_p]]+Pow[q[i-ind_p]]; 
            }
            else if(p[ind_p]<q[ind_q]){ 
                r[i]=Pow[q[ind_q]]+Pow[p[i-ind_q]]; 
            }
            else{
                if(p[i-ind_q]>q[i-ind_p]){
                    r[i]=Pow[p[i-ind_q]]+Pow[q[ind_q]];
                }
                else{
                    r[i]=Pow[q[i-ind_p]]+Pow[p[ind_p]];
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<r[i]%mod<<" ";
        }
        cout<<endl;
    }
}
int main (){
    solve();
}