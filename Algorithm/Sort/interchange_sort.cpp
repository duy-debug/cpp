#include <bits/stdc++.h>
using namespace std;
// interchange_sort: sap xep doi cho truc tiep tuc la no doi cho truc tiep khi dang so sanh voi cac phan tu o sau.
// o(n^2)
void interchange_sort(int a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j])
            swap(a[i],a[j]);
        }
    }
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    interchange_sort(a,n);
}