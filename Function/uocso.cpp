#include <bits/stdc++.h>
#define ll long long 
using namespace std;
ll TongUoc(ll n){
	ll sum=0;
	for(int i=1; i<=sqrt(n); i++){
		if(n%i==0){
			sum+=i;
			if(i!=n/i) 
			sum+=n/i;
		}
	}
	return sum;
}
ll UCLN(ll a, ll b){
    if(a==0 || b==0) 
    return a+b;
    while(b!=0){
        int tem=a%b;
        a=b;
        b=tem;
    }
    return a;
}
ll BCNN(ll a, ll b){
    return a/UCLN(a,b)*b;
}

int main(){
	ll n,a,b;
	cin>>n>>a>>b;;
	TongUoc(n);
	cout<<"Tong uoc: "<<TongUoc(n)<<endl;
	cout<<"UCLN: "<<UCLN(a,b)<<endl;
	cout<<"BCNN: "<<BCNN(a,b)<<endl;
	
}
