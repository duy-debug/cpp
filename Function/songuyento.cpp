#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool KT_SoNguyenTo(ll n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    ll n;
    cin>>n;
    if(KT_SoNguyenTo(n))
    cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
