#include <bits/stdc++.h>
using namespace std;
// Tim kiem tuyen tinh: Linear search : O(n)
 bool timkiem(int a[], int n, int x){
    for(int i=0; i<n; i++){
        if(a[i]==x) return true;
    }
    return false;
 }
 // Tim kiem nhi phan: Binary search : O(LogN).Dieu kien la mang phai sx tang dan hoac giam dan.
bool timkiem1(int a[], int n, int x){
    int l=0, r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==x){
            return true;
        }
        else if(a[mid]<x){
            // tim o ben phai
            l=mid+1;
        }
        else{
            // tim o ben trai
            r=mid-1;
        }
    }
    return false;
}
//ham doi voi mang: binary_search(a,a+n,x);
// ham doi voi vector binary_search(a.begin(),a.end(),x);
// binary_search (a+u,a+v+1,x): a[u,v].
// binary_search (a.begin()+u, a.begin()+v+1a,x): a[u,v].
int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    if(binary_search(a,a+n,x)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}