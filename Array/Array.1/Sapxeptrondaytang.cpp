#include <bits/stdc++.h>
using namespace std;
// Bai tap: in ra cac gia tri khac nhau tu dau -> cuoi
int main(){
	int n, a[100];
	int k[100001]={0};
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];	
	}
	for(int i=0; i<n; i++){
		if(k[a[i]]==0){
			cout<<a[i]<<" ";
			k[a[i]]=1;
		}
	}
	cout<<"\n\n";
	//Tron 2 mang da sap xep tang dan thanh mang tang dan
	int b[100];
	int c[100];
	int x, y;
	cin>>x>>y;
	for(int i=0; i<x; i++){
		cin>>b[i];
	}
	for(int i=0; i<y; i++){
		cin>>c[i];
	}
	int i=0, j=0;
	while(i<x && j<y){
		// so sanh b[i] c[i]
		if(b[i]<= c[j]){
			cout<< b[i]<< ' '; i++;
		}
		else {
			cout<< c[j]<< ' '; j++;
		}
	}
	while(i<x){
		cout<<b[i]<<' '; i++;
	}
	while(j<y){
		cout<<c[j]<<' '; j++;
	}
}
