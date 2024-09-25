#include <bits/stdc++.h>
using namespace std;
int Tong(int n){
	cout<<n<<endl;
	if(n==1) return 1; //bai toan con nho nhat
	else return n+Tong(n-1); //cong thuc truy hoi
}
int main(){
	cout<<Tong(5)<<endl;
}
