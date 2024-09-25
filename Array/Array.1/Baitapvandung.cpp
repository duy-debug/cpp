#include <bits/stdc++.h>
using namespace std;
// Thao tac giup mang tang dan
// vd: input: 5
//            3 2 7 8 1
// 	  output: 10
// Tuc la tong cac don vi toi thieu giup mang tang chat.
// vd: 1 3 5 9 la mang tang chat, 1 3 3 5 9 khong phai la mang tang chat.
int main(){
	int a[10000];
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	long long tem=0;
	for(int i=1; i<n; i++){
		if(a[i]<=a[i-1])
		tem+=(a[i-1]-a[i]+1);
	}
	cout<<tem;
}
