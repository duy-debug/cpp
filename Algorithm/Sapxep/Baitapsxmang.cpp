#include <bits/stdc++.h>
using namespace std;
// Cho 1 mang so nguyen, in ra cac phan tu trong mang theo thu tu tan suat giam dan, neu co nhieu so cung so lan xuat hien thi so nao nho hon se duoc in ra truoc.
// INPUT: 8
//        2 1 3 2 5 6 3 3
// OUTPUT: 3 3 3 2 2 1 5 6
bool cmp(pair<int, int> x, pair<int, int> y){
    if(x.second!=y.second){
        return x.second > y.second;
    }
    else {
        return x.first < y.first;
    }
}
int main(){
    int n; cin>>n;
    int a[n];
    map<int, int> b;
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[a[i]]++;
    }
    vector<pair <int, int>> v;
    for(auto it: b){
        v.push_back(it);
    }
    sort(begin(v),end(v), cmp);
    for(auto it : v){
        //it.first : gia tri
        //it.second : tan suat
        for(int j=0; j<it.second; j++){
            cout<<it.first<<" ";
        }
    }
}