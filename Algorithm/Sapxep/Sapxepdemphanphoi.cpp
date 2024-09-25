#include <bits/stdc++.h>
using namespace std;
// counting_sort: sap xep dem phan phoi.
// Nhuoc diem co thanh danh dau cac phan trong mang am.
// Cac phan tu khong duoc co gia tri qua 10^7 (vi tran bo nho stack).
// O(n+max);
int cnt[10000001]={0};
void counting_sort(int a[], int n, int max1){
    for(int i=0; i<=max1; i++){ // sap xep tang dan 
        if(cnt[i]!=0){
            while(cnt[i]--){
                cout<<i<<" ";
            }
        }
    }
}
int main(){
    int n; cin>>n;
    int a[n];
    int max1=INT_MIN;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        cnt[a[i]]++; // su dung mang danh dau.
        max1=max(max1,a[i]);
    }   
    counting_sort(a,n,max1);
}