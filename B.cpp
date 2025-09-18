#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool des(pair<int,int>& a, pair<int, int>& b){
    return a.second > b.second;
}
void answer(int n, int m){
    vector<pair<int, int>>arr(m);
    for(int i=0;i<m;i++){
        cin>>arr[i].first>> arr[i].second;
    }
    sort(arr.begin(), arr.end(),des);
    int total =0;
    int ans =0;
    for(int i=0;i<m;i++){
        int a=arr[i].first;
        int b= arr[i]. second;
        if(total+a<=n){
            total+=a;
            ans+=a*b;
        }
        else{
            int rem= n-total;
            total=total+rem;
            ans+=rem*b;
        }
        if(total==n){
            break;
        }
    }
    cout<<ans;
}
int main(){
    int n, m;
    cin>>n>>m;
    answer(n, m);
    
}