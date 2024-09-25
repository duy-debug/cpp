#include <bits/stdc++.h>
using namespace std;
int MAX[1000001];
int main(){
	int a[100001];
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}	
	for(int i=0; i<n; i++){
		if(MAX[a[i]]==1){
			cout<<a[i]<<endl;
			return 0;
		}
		MAX[a[i]]=1;
	}
	cout<<"-1"<<endl;
}
