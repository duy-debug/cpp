#include <bits/stdc++.h>
using namespace std;
// selection_sort: sap xep chon. Chon phan tu nho nhat trong n phan tu ban dau, dua phan tu nay ve vi tri  dau tien.(no di het mang no moi doi cho)
// O(n^2)
void selection_sort(int a[], int n){
    for(int i =0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        swap(a[min],a[i]);
    }
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    selection_sort(a,n);
}