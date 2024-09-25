#include <bits/stdc++.h>
using namespace std;
bool Dx(int a[], int l, int r){
    if(l>=r) return 1;
    if(a[l]!=a[r]){
    	return 0;
	} 
    return Dx(a,l+1,r-1);
}
// bool dx(int a[], int n){
//     int l=0, r=n-1;
//     while(l<r){
//         if(a[l]!=a[r]) return 0;
//         l++; r--;
//     }
//     return 1;
// }
int main(){
    int a[100001];
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    if(Dx(a,0,n-1)) cout<<"Yes";
    else cout<<"No";
}
