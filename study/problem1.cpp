#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    vector<ll>arr(n);

    for(int i=0; i<n;i++) cin >> arr[i];

    stack<int> st;

    int a = 1;
    for(int i=0; i<n-1;i++){
        if(arr[i]==arr[i+1]){
            a++;
            st.push(arr[i]);
            cout << st.size() << endl;
            if(arr[i] == a){
                st.push(arr[i+1]);
                for(int j=0; j<a;j++){
                    st.pop();
                }
                a=1;
                i++;
                cout << st.size() << endl;
            }
        } else{
            st.push(arr[i]);
            cout << st.size() << endl;
        }
    }
    cout << st.size() << endl;
}