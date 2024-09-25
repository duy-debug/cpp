#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool SoChinhPhuong(ll n){
	if(n==0) return 0;
	int can=sqrt(n);
	if(can*can==n) return 1;
		return 0;
}
int main(){
	ll n;
	cin>>n;
	if(SoChinhPhuong(n))
	cout<<"Yes";
	else cout<<"No";
}
