#include <bits/stdc++.h>
using namespace std;
void InLeft(long long n){
    if(n<10){
        cout<<n<<" ";
        return;
    }
        InLeft(n/10);
        cout<<n%10<<" ";
}
void InRight(long long n){
    if(n<10){
        cout<<n<<" ";
        return ;
    }
        cout<<n%10<<" ";
        InRight(n/10);
}
int main(){
    long long n;
    cin>>n;
    InLeft(n);
    cout<<endl;
    InRight(n);
}