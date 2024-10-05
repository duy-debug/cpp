#include <bits/stdc++.h>
using namespace std;
// Sap xep tong chu so tang dan, neu 2 so co cung tong chu so thi so nao lon hon se dung truoc
// stable_sort: la ham sap xep tang dan nhung no giu nguyen thu tu. vd: 2 so bang nhau thi so nao xuat hien trc thi dc dung trc
int tongcs(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
// bool cmp(int a, int b){ // Sap xep tong chu so tang dan, neu 2 so co cung tong chu so thi so nao lon hon se dung truoc
//     if(tongcs(a)!=tongcs(b)) return tongcs(a)<tongcs(b);
//     else return a>b;
// }
bool cmp(int a, int b){
    return tongcs(a)<tongcs(b);
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    // sort(a,a+n,cmp);
    // for(auto x: a) cout<<x<<" ";
    // cout<<endl<<endl;
    // stable_sort: la ham sap xep tang dan nhung no giu nguyen thu tu. vd: 2 so bang nhau thi so nao xuat hien trc thi dc dung trc
    stable_sort(a,a+n,cmp);
    for(auto x: a) cout<<x<<" ";
}