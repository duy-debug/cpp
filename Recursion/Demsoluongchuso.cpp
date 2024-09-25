#include <bits/stdc++.h>
using namespace std;
int Tong(long long n){
    if(n<10) return 1;
    else return 1+Tong(n/10);
}
int main(){
    long long n;
    cin>>n;
    cout<<Tong(n);
}