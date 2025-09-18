#include <iostream>
using namespace std;

void solve(){
    int a,b,c,d; cin >> a >> b >> c >> d;

    int mins = min(a, min(b,min(c,d)));

    if(mins ==b || mins == d) cout << "Gellyfish" << endl;
    else cout << "Flower" << endl;

}

int main(){

    int t; cin >> t;

    while(t--){
        solve();
    }

    return 0;
}