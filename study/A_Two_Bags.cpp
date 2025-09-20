#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll y, k,n;
    cin>>y>>k>>n;
    ll p = k-(y%k);
    ll sum = y + p;
    if(sum<=n){ 
        cout<<p<<" ";
        sum = sum + k;
    for(int i=sum; i<=n; i= i+k){
        p = p + k;
        cout<<p<<" ";
    }
}
else{
    cout<<-1<<endl;
}
}