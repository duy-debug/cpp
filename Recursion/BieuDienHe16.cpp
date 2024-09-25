#include <bits/stdc++.h>
using namespace std;
void He16(long long n){
    if(n==0) return;
    He16(n/16);
    int tem=n%16;
    if(tem<10) cout<<tem;
    else cout<<(char)(tem+55);
}
int main(){
    long long n;
    cin>>n;
    if(n==0) cout<<0;
    else He16(n);
}