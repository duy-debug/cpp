#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int a[n];
    map<long long, int> b;
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[a[i]]++;
    }
    for(auto x: b) cout<<x.first<<" "<<x.second<<endl;
}