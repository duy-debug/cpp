#include <bits/stdc++.h>
using namespace std;
// su dung ky thuat chia de tri
int Luythuanhiphan(int a, int b){
	if(b==0) return 1;
	int tem=Luythuanhiphan(a,b/2);
	if(b%2==1) return tem*tem*a;
	else return tem*tem; 
}
int main(){
	int a, b;
	cin>>a>>b;
	cout<<Luythuanhiphan(a,b)<<endl;
}
