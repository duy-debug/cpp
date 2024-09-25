#include <bits/stdc++.h>
using namespace std;
int Vitridau(int a[], int n, int x){
    int res=-1;
    int l=0, r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==x){
            res= mid;
            // tim kiem them o ben trai cua mid con x hay khong
            r=mid-1;    
        }
        else if(a[mid]<x){
            l=mid+1;
        }
        else r=mid-1;
    }
    return res;
}
int Vitricuoi(int a[], int n, int x){
    int res=-1;
    int l=0, r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==x){
            res= mid;
            // tim kiem them o ben phai cua mid con x hay khong
            l=mid+1;    
        }
        else if(a[mid]<x){
            l=mid+1;
        }
        else r=mid-1;
    }
    return res;
}
// Tim vi tri dau tien >= x trong mang duoc sap xep tang dan
int Timx(int a[], int n, int x){
    int res=-1, l=0, r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]>=x){
            res=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return res;
}
// Tim vi tri dau tien > x trong mang duoc sap xep tang dan
int Timx1(int a[], int n, int x){
    int res=-1, l=0, r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]>x){
            res=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return res;
}
// Ham lower_bound(): tim vi tri dau tien cua phan tu >= x trong mang, vector tang dan hoac giam dan.
// Ham upper_bound(): tim vi tri dau tien cua phan tu > x trong mang, vector tang dan hoac giam dan.
// Doi voi mang no tra ve con tro, con vector thi no tra ve iterator.
// Neu ma khong tim thay phan tu > x hoac >= x thi no tra a+n, a.end().
int main(){
    int n,x; cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    cout<<Vitridau(a,n,x)<<" "<<Vitricuoi(a,n,x)<<endl;
    int l=Vitridau(a,n,x);
    int r=Vitricuoi(a,n,x);
    if(l!=-1) cout<<r-l+1<<endl; // Dem so lan x xuat hien trong mang
    else cout<<0<<endl;
    cout<<Timx(a,n,x)<<endl;
    cout<<Timx1(a,n,x)<<endl;

    set<int> s;
    for(int i=0; i<10; i++) s.insert(i);
    auto it = s.lower_bound(4);
    cout<<*it<<endl;  // Tim duoc gia tri cua phan tu >= 4
    // cout <<it -s.begin()<<endl; ap dung cho vector
    cout<<distance(s.begin(),it)<<endl; // In ra vi tri cua phan tu >= 4
    // Ham distance tinh khoang cach giua hai iterator.
}
