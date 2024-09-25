#include <bits/stdc++.h>
using namespace std;
long long FMAX(long long n){
    if(n<10) return n;
    else return max(n%10,FMAX(n/10));
}
long long FMIN(long long n){
    if(n<10) return n;
    else return min(n%10,FMIN(n/10));
}
int main(){
    long long n;
    cin>>n;
    cout<<FMIN(n)<<" "<<FMAX(n);
}
