#include <bits/stdc++.h>
using namespace std;
// multimap co the luu cac key trung nhau.
int main(){
    multimap<int, int> a;
    a.insert({1,2});
    a.insert({1,2});
    a.insert({2,3});
    a.insert({0,2});
    a.insert({2,1});
    a.insert({3,2});
    for(auto x: a) cout<<x.first<<" "<<x.second<<endl;
    // khong the cout<<a[1]<<endl; vi no khong biet truy cap key nao
    cout<<endl<<endl;
    a.erase(1);
    for(auto x: a) cout<<x.first<<" "<<x.second<<endl;
    // a.erase(10);  runtime errorr
}