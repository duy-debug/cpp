#include <bits/stdc++.h>
using namespace std;
bool cmp(string s, string t){
    string st= s+t;
    string ts=t+s;
    return st>ts;
}
int main(){
    int n; cin>>n;
    string a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n,cmp);
    for(string x: a) cout<<x;
}