#include <bits/stdc++.h>
using namespace std;
int cnt[10000001];
int main(){
	int n;
	int a[100000];
	cin>>n;
	// In tan suat theo thu tu tang dan trong mang
	int MIN=1e9, MAX=-1e9; 
	for(int i=0; i<n; i++){
		cin>>a[i];
		cnt[a[i]]++;
		MIN=min(MIN,a[i]);
		MAX=max(MAX,a[i]);
	}
	for(int i=MIN; i<=MAX; i++){
		if(cnt[i]!=0){
			cout<<i<<" "<<cnt[i]<<endl;
		}
	}
	cout<<endl;
	// In tan suat theo thu tu trong mang
	for(int i=0; i<n; i++){
		if(cnt[a[i]]!=0){
			cout<<a[i]<<" "<<cnt[a[i]]<<endl;
			cnt[a[i]]=0;
		}
	}
}
