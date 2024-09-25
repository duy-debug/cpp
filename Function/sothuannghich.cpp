#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool SoThuanNghich(ll x){
    ll b=x, k=0;
    while(x!=0){
        k=k*10+x%10;
        x/=10;
    }
    if(k==b) return 1;
    else return 0;
}
int main(){
	ll n;
	cin>>n;
	if(SoThuanNghich(n))
	cout<<"Yes";
	else cout<<"No";
}
