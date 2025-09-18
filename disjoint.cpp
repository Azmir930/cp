#include<bits/stdc++.h>
using namespace std;
vector<int>par(10);
vector<int>size(10);
void makeset(int n){
    
    for(int i=0;i<n;i++){
        par[i]=i;
        size[i]=1;
    }
}
int findre(int a){
    if(a== par[a]) return a;
    int r= findre(a);
    return r;
}
 void Union(int a, int b){
    int Ra = findre(a);
    int Rb= findre(b);
    if(Ra== Rb){

    }
    else {
        if(size[Ra]>size[Rb]){ 
        par[Rb]==Ra;
        size[Ra] += size[Rb];
    }
    else {
        par[Rb]=Rb;
        size[Rb] += size[Rb];
    }
}
}
int main(){
    makeset(8);
    Union(1, 2);
    Union(2, 3);
    Union(4, 5);
    Union(6, 7);
    Union(5, 6);
    Union(3, 7);

    
    for (int i = 1; i <= 7; i++) {
        cout << "Representative of " << i << " is " << findre(i) << endl;
    }
}