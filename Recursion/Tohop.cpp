#include <bits/stdc++.h>
using namespace std;
int tohop(int n, int k){
	if(k==0 || k==n) return 1;
	else return tohop(n-1,k-1) + tohop(n-1,k);
}
int main(){
	int n, k;
	cin>>n>>k;
	cout<<tohop(n,k)<<endl;
}
