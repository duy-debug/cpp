#include <bits/stdc++.h>
using namespace std;
// chay rat lau: O(2^n)
long long fibo(long long n){
	if(n==0 || n==1) return n; // bai toan con nho nhat
	else return fibo(n-1)+fibo(n-2); // cong thuc truy hoi
}
int main(){
	int n;
	cin>>n;
	cout<<fibo(n)<<endl;
}
