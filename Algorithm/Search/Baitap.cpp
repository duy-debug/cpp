#include <bits/stdc++.h>
using namespace std;
//Dong 1 nhap n,dong 2 nhap phan tu trong mang, dong 3 nhap so luong truy van.
// input: 5
//        5 4 3 2 1
//        2
//        2
//        8
// output:YES
//        NO
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    int x; cin>>x;
    while(x>0){
        int y; cin>>y;
        if(binary_search(a,a+n,y)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        x--;
    }
}