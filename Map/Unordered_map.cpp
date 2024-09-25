#include <bits/stdc++.h>
using namespace std;
// unordered_map: no se khong in theo thu tu minh nhap tu ban phim.
// Su khac nhau giua map va multimap tot nhat O(1), xau nhat O(n) khi su dung cac ham find,count,erase..
int main(){
    unordered_map<int, int> a;
    a.insert({1,2});
    a.insert({3,2});
    a.insert({4,2});
    a.insert({5,2});
    a.insert({0,2});
    a.insert({1,2});
    for(auto x: a) cout<<x.first<<" "<<x.second<<endl;
}