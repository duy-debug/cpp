#include <bits/stdc++.h>
using namespace std;
// su dung ky thuat chia de tri
int Luythuanhiphan(int a, int n){
	if(n==0) return 1;
	int tem=Luythuanhiphan(a,n/2);
	if(n%2==1) return tem*tem*a;
	else return tem*tem; 
}
int main(){
	int a, n;
	cin>>a>>n;
	cout<<Luythuanhiphan(a,n)<<endl;
}
