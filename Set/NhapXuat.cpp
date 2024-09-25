#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> a;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        a.insert(x);
    }
    for(auto x: a) cout<<x<<" ";
}