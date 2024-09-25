#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if(b==0) return a; // bai toan con nho nhat
	else return gcd(b,a%b); // cong thuc truy hoi
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;	
}
