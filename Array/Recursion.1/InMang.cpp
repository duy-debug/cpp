#include <bits/stdc++.h>
using namespace std;
void In(int a[], int n){
    if(n==0) return;
    In(a,n-1);
    cout<<a[n-1]<<" ";
}
void InNguoc(int a[], int n){
    if(n==0) return;
    cout<<a[n-1]<<" ";
    InNguoc(a,n-1);
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    In(a,n);
    cout<<endl;
    InNguoc(a,n);
}