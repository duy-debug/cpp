#include <bits/stdc++.h>
using namespace std;
// In ra vi tri dau tien va cuoi cua x xuat hien trong mang.Truong hop k co in ra "-1 -1".
// Input: 3 4
//		  4 2 4
//Output: 0 2			 		
int main(){
	int n, x;
	int a[100001];
	cin>>n>>x;
	for(int i=0; i<n; i++){
		cin>>a[i];
	} 

	for(int i=0; i<n; i++){
		if(a[i]==x){
			cout<<i<<" ";
			break;
		}	
	}
	for(int i=n-1; i>=0; i--){
		if(a[i]==x){
			cout<<i<<" ";
			return 0;
		}	
	}
	cout<<"-1 -1";
}

