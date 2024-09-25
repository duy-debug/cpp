#include <bits/stdc++.h>
using namespace std;
// Mang: ham sort [x,y) O(NLogN) => sort(a+x,a+y+1) sap xep theo doan
// Vector: ham sort [x,y) => sort(a.begin()+x, a.begin()+y+1); 
// sort : quick sort(co the len den O(n^2)) + heapsort sort 
// stable_sort: merge sort O(NLogN)
// sort nhanh hon stable_sort
    bool cmp(int a, int b){ // sap xep tang dan khong biet so am, so duong.
        return abs(a)<abs(b);
    }
int main(){
    //doi voi mang
    int n; cin>>n; 
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(auto x: a) cout<<x<<" ";
    sort(a,a+n); // tang dan
    for(auto x: a) cout<<x<<" ";
    cout<<endl;
    sort(a,a+n,greater<int> ()); // giam dan    
    for(auto x: a) cout<<x<<" "; 
    // cout<<endl;
    // int n; cin>>n;
    // vector<int> a(n);
    // for(int i=0; i<n;i ++) cin>>a[i];
    // sort(a.begin(), a.end()); // hoac sort(begin(a),end(a));
    // for(auto x: a) cout<<x<<" ";
    //comparator : compare
    cout<<endl;
    sort(a,a+n,cmp);
    for(auto x: a) cout<<x<<" ";
}