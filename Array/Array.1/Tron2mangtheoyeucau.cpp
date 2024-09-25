#include <bits/stdc++.h>
using namespace std;
//Tron 2 mang sao cho day A o vi tri chan day B o vi tri le . Trong do day A tang dan, day B giam dan.
// input:
//	4
//	2 6 4 1
//	5 9 8 2
//	output:
//	1 9 2 8 4 5 6 2	
int main(){
	int n;
	int a[100001];
	int b[100001];
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		cin>>b[i];
	}
	sort(a, a+n); // ham sx tang dan
	sort(b, b+n, greater<int>()); // ham sx giam dan
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "<<b[i]<<" ";
	}	
}
