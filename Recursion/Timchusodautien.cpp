#include <bits/stdc++.h>
using namespace std;
long long SoDauTien(long long n){
    if(n<10) return n;
    else return SoDauTien(n/10);
}
int main(){
    long long n;
    cin>>n;
    cout<<SoDauTien(n);
}