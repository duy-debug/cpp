#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool SoHoanHao(ll n){
	ll sum=0;
	for(int i=1; i<=sqrt(n); i++){
		if(n%i==0) sum+=i;
		if(i!=sqrt(n)){
			sum+=n/i;
		}	
	}
	if(sum-n==n) return 1;
	else return 0;
}
int main(){
	ll n;
	cin>>n;
	if(SoHoanHao(n))
	cout<<"Yes";
	else cout<<"No";
}
