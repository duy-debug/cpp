#include <bits/stdc++.h>
using namespace std;
void BieuDienNhiPhan(long long n){
	if(n==0){
	return;
	}
	BieuDienNhiPhan(n/2);
	cout<<n%2;
}
int main(){
	long long n;
	cin>>n;
	if(n==0) cout<<0<<endl;
	else BieuDienNhiPhan(n);
}
